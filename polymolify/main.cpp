#include<iostream>

using namespace std;

class Shape
{

private:

    int x,y;

public:
    virtual void draw() const //이게 전부다.
    {
        cout <<" Shape::draw() is called"<<endl;
    }

};

class Rectangle : public Shape
{
private :

    int w, h;
public:
     void draw() const
    {
        cout<<"shape::draw() is called-Rectangle"<<endl;
    }

};

class Circle : public Shape
{
private :
    int r;
public:
    virtual void draw() const
    {
        cout<<"shape::draw() is called-Circle"<<endl;
    }

};

class Square : public Rectangle
{
public:
     void draw() const
    {
        cout<<"shape::draw is called-Square"<<endl;
    }
};


int main()
{
    //Rectangle  r1,r2; //무의미 하다
    //Circle c1,c2; //무의미 하다.

    unsigned int num;
    num=4;
    Shape* s[512];

    s[0]= new Circle();
    s[1]= new Circle();
    s[2]= new Rectangle();
    s[3]= new Square();

    for(unsigned int i=0; i<num; ++i)
    {
        Shape *p=s[i];
        p->draw(); //이녀석이 다채롭게 그리게 하는게 다형성이다.//다형성이 다양성이 아니라 그냥 변수 그떄그때 다르게 하기위해서 하나로 표현하지만
                                                                        //진짜 다른건 아니다.
                                                                        //진짜 다른건 서로 다른 클래스의 변수 이름이 같은것.

    }



}