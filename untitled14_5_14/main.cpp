#include <iostream>
#include <cassert>
//이항연산자 = 덧셈 이항연산자
//항이 2개가 있어야 한다.
//3+5
// +는 항이 2개가 필요있다.
//입력이 2개 출력이 1개
//+( , )
//int +(int , int ) //return 값이 int고 입력이 2개
//k=i+j;
//class vec2
//{
//private:
//    float x,y;
//    vec2():x(0),y(0);
//    vec2(float _x, float _y):x(_x),y(_y){}
//
//    컴퓨터가 모른다. 안 가르쳐줘서  , vec2는 프로그래머가 정의했다. 따라서 저걸 모른다.
//
//};
//
////operator overloading
//연산자 오버로딩
//
////+(const vec2형 ,const vec2 형)
////연산이 수행되는동안 vec2 ,vec2 가 바뀌면 안돼
//
//넘겨버리면 복사가 들어간다. 기본적으로
//복사를 해서 넘길 필요가 없다.
//따라서
//+(const vec2&, const vec2&) 를 쓴다.
////vec2 operator+(const vec2&, const vec2&) 를 쓴다. // 이렇게 정의해버렸다.
//
//i=vec2(3,5);
//j=vec2(4,1);
//
//k= i+j; 연산안되는데 저 오퍼레이터를 정의하면 연산이 된다.
//


//r-value operator - 계산
class vec2
{ public:
       vec2() : x(0.0f),y(0.0f) { }
        vec2(float _x, float _y): x(_x),y(_y){  }
public:
    float x,y;
    float operator()(unsigned int idx) const //x y 와 바뀌면 안되니까 뒤에 const를 붙인다.
    {
        if(idx ==0) return x;
        else if(idx ==1) return y;

//        return x;

        assert(0); // 프로그램을 죽이는것이다.


    }// 함수 오퍼레이터는 클래스 안에서 밖에 못 받는다.

    // l-value operator - 대입
    class vec2
    { public:
        vec2() : x(0.0f),y(0.0f) { }
        vec2(float _x, float _y): x(_x),y(_y){  }
    public:
        float x,y;
        float& operator()(unsigned int idx)  //x y
        {
            if(idx ==0) return x;// 실체를 넘겨야 하니까 & 레퍼런스로 넘긴다.
            else if(idx ==1) return y;

//        return x;

            assert(0); // 프로그램을 죽이는것이다.

        float operator*(const vec2& b)
        {
            vec2 c;

//            return x*b(0) + y*b(1);
            return (*this)(0)*b(0)+ (*this)(1)*b(1);
        }

        float operator*(const float s, const vec2& a)
        {
            vec2 c;
            c(0)=s *a(0);
            c(1)=s *a(1);
            return c;
        }

            float operator*(const float s, const vec2& a)
            {
//                vec2 c;
//                c(0)=s *a(0);
//                c(1)=s *a(1); // 위험하다 똑같은 코드라서

                return s*a;
            }



        }




        }// 함수 오퍼레이터는 클래스 안에서 밖에 못 받는다.
        //배열 오퍼레이터도 함수오퍼레이터랑 똑같다.





};

vec2 operator+(const vec2& a, const vec2& b) // + 는 이항 연산자니 2개 받겠지
{
    vec2 c;
    c.x = a.x+b.x;
    c.y = a.y+b.y;

    return c;



}




//c함수가 더 원하는 결과에 가깝다. 클래스의 소속되어있는 오퍼래이터 보다

vec2 operator-(const vec2& a, const vec2& b)
{
    vec2 c;
    c.x=a.x-b.x;
    c.y=a.y-b.y;
    return c;
}

vec2 operator-() const //단항연산자
{
    vec2 c;
    c(0)=-(*this)(0);
    c(1)=-(*this)(1);

    return c;
}

vec2 operator- (const vec2& a)
{
    vec2 c;
    c(0)=-a(0);
    c(1)=-a(1); //클래스 내부
}


int main()
{
    vec2 i,j,k,w,a,b,c;

    i= vec2(3.0f , 5.0f);
    j= vec2(4.0f, 1.0f);
    k= i+j;
    std:: cout << k.x<< "  "<<k.y<<std::endl;
    w=i-k;
    c(0)=a(0) + b(0);
    return 0;
//    단항연산자
    k=-i; //단항연산자 따로 구현해 줘야한다.

    c(0)= a(0)+ b(0);
    c[0] = a(0)+ b(0);

    c(0,0)=a(0,0)+b(0,0); 가능
    c[0,0] 불가능


    c.set_x(a.get_x()+b.get_x()); //이것은 private 했을때 할수 있는 방법
    c.set_y(a.get_y()+b.get_y()); // 이것도 private 할수있을때 할수있는 방법

}





