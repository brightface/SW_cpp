import React from 'react';
import ReactDOM from 'react-dom';
import './index.css';
import {
dfs_xy_conv,
jsonCurrentWth
} from './geo'
import Map from './components/Map.js'

function Square(props) {
    return (
    <button className="square" onClick={props.onClick}>
                                       {props.value}
                                       </button>
    );
}

class Board extends React.Component {
renderSquare(i) {
        return (
        <Square
        value={this.props.squares[i]}
        onClick={() => this.props.onClick(i)}
        />
        );
}

render() {
    return (
    <div>
    <div className="board-row">
                   {this.renderSquare(0)}
    {this.renderSquare(1)}
    {this.renderSquare(2)}
    </div>
      <div className="board-row">
                     {this.renderSquare(3)}
    {this.renderSquare(4)}
    {this.renderSquare(5)}
    </div>
      <div className="board-row">
                     {this.renderSquare(6)}
    {this.renderSquare(7)}
    {this.renderSquare(8)}
    </div>
      </div>
    );
}
}

class Game extends React.Component {

constructor(props) {
        super(props);
        this.state = {
            history: [
            {
                squares: Array(9).fill(null)
            }
            ],
            stepNumber: 0,
                xIsNext: true,
                    geolocation: {lat: 0.0, long: 0.0},
            whether: { PTY: 0, RN1: 0, SKY: 1, T1H: 20.0 },
        };
        this.connection = null;  // (5) 게임서버연결 소켓변수 설정
}

componentDidMount() {  // (4) 게임서버연결, 메시지 처리함수(handlePushMessage) 등록
    this.connection = new WebSocket('ws://localhost:1337/', 'tic');
    var that = this;
    this.connection.onmessage = function (message) {
        that.handlePushMessage(message, that);
    };
}

handlePushMessage(message, that) {  // (6) 메시지 처리함수 구현
try {
var json = JSON.parse(message.data);
} catch (e) {
console.log('This doesn\'t look like a valid JSON: ', message.data);
return;
}

if (json.type === 'message') {
var t = json.data.text;
var i = t.indexOf('-&gt;');
var j = t.indexOf('&lt;&lt;');
var loc;
if( i > 0) {
loc = parseInt(t.substring(0, i).trim(), 10);
that.handleClick(loc);
}
else if( j > 0) {
loc = parseInt(t.substring(0, j).trim(), 10);
that.jumpTo(loc);
}
}
else if(json.type === 'geolocation'){
var tt = json.data.text;
console.log(tt);
this.setState({
geolocation: { lat: tt.lat, long:tt.long }
});

var whether;
//    (2) XY좌표변환
//          fetch(`https://cors-anywhere.herokuapp.com/http://newsky2.kma.go.kr/service/SecndSrtpdFrcstInfoService2/ForecastGrib?ServiceKey=nMUhKE9aQR%2FhZKPveXRcjEkjkQrO22vf0kdG%2FgAoS8GnLVr5fBj2h93uvvLPu3xBL3R%2B50MN%2FboRFAAgOROmXg%3D%3D&base_date=20180524&base_time=1100&nx=60&ny=128&_type=json`)
var rs = dfs_xy_conv("toXY", tt.lat, tt.long);   // 위도/경도 -> 기상청 좌표x / 좌표 y 변환



//    (3) 기상청 API 호출
//          fetch(`https://cors-anywhere.herokuapp.com/http://newsky2.kma.go.kr/service/SecndSrtpdFrcstInfoService2/ForecastGrib?ServiceKey=nMUhKE9aQR%2FhZKPveXRcjEkjkQrO22vf0kdG%2FgAoS8GnLVr5fBj2h93uvvLPu3xBL3R%2B50MN%2FboRFAAgOROmXg%3D%3D&base_date=20180524&base_time=1100&nx=60&ny=128&_type=json`)
var whetherlink = jsonCurrentWth(rs.nx, rs.ny);  // 기상청 날씨 URL 계산
fetch(whetherlink)  // 여기에서 인터넷으로 날려준다.
.then(response => response.json())
.then(json => {
//    (4) 동네날씨정보 수신//state에 저장
//var whether;
//whether = JSON.parse(json);
if(json.response.body != undefined) {
whether = json.response.body.items.item;
console.log(whether);
var sky = whether.find(item => {return item.category == 'SKY';}).obsrValue;
var t1h = whether.find(item => {return item.category == 'T1H';}).obsrValue;
var pty = whether.find(item => {return item.category == 'PTY';}).obsrValue;
var rn1 = whether.find(item => {return item.category == 'RN1';}).obsrValue;
this.setState({
whether: { PTY: pty, RN1: rn1, SKY: sky, T1H: t1h }
});   // 여기서 그려주는 것은 react가 알아서 그려준다.
}
})
}
else {
console.log('Hmm..., I\'ve never seen JSON like this: ', json);
}
}

handleClick(i) {
        const history = this.state.history.slice(0, this.state.stepNumber + 1);
        const current = history[history.length - 1];
        const squares = current.squares.slice();
        if (calculateWinner(squares) || squares[i]) {
            return;
        }
        squares[i] = this.state.xIsNext ? "X" : "O";
        this.setState({
            history: history.concat([
                {
                        squares: squares
                }
        ]),
            stepNumber: history.length,
                xIsNext: !this.state.xIsNext
        });
}

handleClick2(i) {    // (2) 플레이 상태를 확인한 후 게임서버로 이벤트 전송
        const history = this.state.history.slice(0, this.state.stepNumber + 1);
        const current = history[history.length - 1];
        const squares = current.squares.slice();
        if (calculateWinner(squares) || squares[i]) {
            return;
        }
        squares[i] = this.state.xIsNext ? "X" : "O";
        this.connection.send(i + " -> " + squares[i]);
}

jumpTo(step) {
        this.setState({
                              stepNumber: step,
                              xIsNext: (step % 2) === 0
                      });
}

render() {
    const history = this.state.history;
    const current = history[this.state.stepNumber];
    const winner = calculateWinner(current.squares);

    const moves = history.map((step, move) => {
            const desc = move ?
            'Go to move #' + move :
            'Go to game start';
            return (   // (3) 히스토리버튼 클릭시 게임서버로 이벤트 메시지 전송
            <li key={move}>
            <button onClick={() => this.connection.send(move + " << ")}>{desc}</button>
            </li>
            );
    });

    let status;
    if (winner) {
        status = "Winner: " + winner;
    } else {
        status = "Next player: " + (this.state.xIsNext ? "X" : "O");
    }

    let articles = '';
    if(this.state.json != null)
        articles = this.state.json.map((article, move) => {
                const desc = move ?
                '(' + move + ') ' + article :
                '(0) start';
                return (
                <li key={move}>
                {desc}
                </li>
                );
        });

    // 하늘상태(SKY) 코드 : 맑음(1), 구름조금(2), 구름많음(3), 흐림(4)
    // 강수형태(PTY) 코드 : 없음(0), 비(1), 비/눈(2), 눈(3)
    //                        여기서 비/눈은 비와 눈이 섞여 오는 것을 의미 (진눈개비)
    let imgSKY, imgPTY, altSKY, altPTY;
    switch(this.state.whether.SKY) {
        case 1: imgSKY='sunny.jpg', altSKY='맑음'; break;
        case 2: imgSKY='cloudy.jpg', altSKY='구름조금'; break;
        case 3: imgSKY='cloudy_heavy.png', altSKY='구름많음'; break;
        case 4: imgSKY='dark.png', altSKY='흐림'; break;
        default: imgSKY='', altSKY='에러발생'; break;
    }
    switch(this.state.whether.PTY) {
        case 0: imgPTY='no_snow_rain.jpg', altPTY='없음'; break;
        case 1: imgPTY='rainy.jpg', altPTY='비'; break;
        case 2: imgPTY='rain_snow.jpg', altPTY='비/눈'; break;
        case 3: imgPTY='snow.png', altPTY='눈'; break;
        default: imgPTY='', altPTY='에러발생'; break;
    }
    let location = [];  //여기부터 아래 3줄더까지가
    location.push(<li key={1}> 경도:{this.state.geolocation.long}, 위도:{this.state.geolocation.lat} </li>);
    location.push(<li key={2}> PTY:{this.state.whether.PTY}, RN1:{this.state.whether.RN1}, SKY:{this.state.whether.SKY}, T1H:{this.state.whether.T1H} </li>);
    location.push(<li key={3}> <div> SKY:{this.state.whether.SKY} <div> <img src={imgSKY} alt={altSKY} height="100" width="100" key={'sky'}/> </div> </div> <div> PTY:{this.state.whether.PTY}  <div> <img src={imgPTY} alt={altPTY} height="100" width="100" key={'sky'}/> </div> </div> </li>);

    return (
    <div className="game">
                   <div className="game-board">
                                  <Board
    squares={current.squares}
    onClick={i => this.handleClick2(i)}  // (1) 보드안에서 클릭시 네트워크 처리함수 호출
            />
            </div>
              <div className="game-info">
                             <div>{status}</div>
                                            <ol>{moves}</ol>
                                                         <div> <ul style={{listStyleType: "none"}}> {articles} </ul> </div>
                                                                                                                       </div>
                                                                                                                         <div className="whether-info">
                                                                                                                                        <ol>{location}</ol>
                                                                                                                                                        </div>
                                                                                                                                                          <div className="google-map">
                                                                                                                                                                         <Map loc={this.state.geolocation}/>
                                                                                                                                                                                  </div>
                                                                                                                                                                                    </div>
    );
}
}

// ========================================

ReactDOM.render(<Game />, document.getElementById("root"));

function calculateWinner(squares) {
    const lines = [
    [0, 1, 2],
    [3, 4, 5],
    [6, 7, 8],
    [0, 3, 6],
    [1, 4, 7],
    [2, 5, 8],
    [0, 4, 8],
    [2, 4, 6]
    ];
    for (let i = 0; i < lines.length; i++) {
        const [a, b, c] = lines[i];
        if (squares[a] && squares[a] === squares[b] && squares[a] === squares[c]) {
            return squares[a];
        }
    }
    return null;
}