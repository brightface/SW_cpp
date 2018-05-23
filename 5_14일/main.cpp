#include <iostream>


/*sem 소프트웨어 엔지니어링 저거를 한다.*/
/*상속은 코드 중복을 줄이게 된다*/
/* 접근제어자
 * private public
 * public protected 이걸로 class 안에 public 접근 할수 있다. 그냥은 private 접근 못해
 * */

class Car
{
private:
    int speed;
};

class SuperCar: public Car{
private:
    bool turbo;
public:
    SuperCar() : Car(), turbo(false)
    {
        //그냥 speed =0 ; 하면 안된다. 왜냐하면 부모의 멤머변수이기 때문에. 따라서 Car 생성자를 불러야한다.
        //저 쪽에 있듯이 수퍼카가 초기화해주면 이상하다. 카가 초기화 해줘야한다.
        //부모의 생성자가 먼저 불려야한다.
        //그다음에 자식클래스의 생성자가 불려야한다.
        //죽을때는 반대이다. 소멸자는 뒤에 : 붙이는게 없다. 명시하지 않아도 부모가 불러; 소멸할떄는 아무것도 안달아야한다.
    }
    ~SuperCar()
    {
        //아무것도 없어야 한다. 소멸자는 들어오는게 없어야지

    }

    SuperCar(int _speed) : Car(_speed)
    {

    }
        // overrideing 이건 함수의 이름을 중첩해 쓰지만 클래스가 다른것.






    class SuperCar
    {
    public:
        void Func()
        {
            int sum=0;
            for (int i = 0; i < 100; ++i) {

                sum+=i;
                //동일한 코드를 쓰지 마라
                //부모와 같은 코드이면 또 쓰지 말고 그냥
                //Car::Func;  를 써라

            }
        }
    private:
        speed;
    };


    //다중상속 : 수퍼클래스의 2개 속성 모두 상속받는다.

    --------------------------------------------------

//c의 컴파일러는 c++의 컴파일러이다.
//다형성은 c에서 함수포인터로 구현한다.
//그것을 버츄얼 function table(배열,리스트)로 놔서 이라고 한다.

glutDisplaFucn(my_draw);





shpae * ps = new Rectangle()
기에 가면 shape 이 있다. 아직 rectangle 잇는지 몰라
    관리는 최상위 클래스가 한다.


1. Rectangle * pr = (Rectangle*) ps;
    pr->setwidth() 이거 가능 ps 는 불가능 ,새로운 포인터 만들어서 더 많이 볼수 있게 했으니까


    업캐스팅, 다운캐스팅
    다운캐스팅을 조심해야한다.
    업캐스팅은 많이 쓰는 캐스팅이다.


내부적으로 구현 어떻게
    v-table 로 구현되있고
    draw로 콜하게 되어있고
    위치들을 하나씩 다 가지게 되어있다.
    많아지면 v-table 을 더 커지게 된다.

    MFC 코드 보면
    문법이 그지 같다.
    QT 같은것이 v-table 안쓰고 하는법을 만들어 냈다.









































}


;

int main()
{
    SuperCar s1;
}
