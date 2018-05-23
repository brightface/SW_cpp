#include<iostream>
#include<string.h>
#include <cmath>
#include<cstring>

class Car{
public:
    void setColor(std::string c)
    {
        color =c;
    }
    std::string getColor() const //짝을 이룬다.
    {
       //이러면 에러 왜 안바꾸기로했는데 바꾸냐 color="blue";//
        return color;

    }
private:
    std:: string color;
    double_t aaa[10000];
};

void MyPrint(const Car& c);

int main()
{
    Car c;

    c.setColor("red");

    MyPrint(c);

    return 0;
}

void MyPrint(const Car& c) //매개변수로 받으면 받드시 함수도 뒤에 const 붙여야한다.
{
    std::cout<<c.getColor() << std::endl;

}

/*컴파일러 입장에서는 내용이 바뀔수 있따.
컴파일러 입장에서는 함수를 불렀을때 c 내용이 바뀔지 아닐지 몰라
보증을 해줘야한다. 컴파ㄴ일러 입장에서는 내용이 안바뀌게 하는것 반드시 함수와 짝을 이뤄야한다. const*/
//자바도 final이란 명령어가 있다.