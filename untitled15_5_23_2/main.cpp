#include <iostream>
#include <cassert>
#include <algorithm>


//c macro
//c++ template
#define MAX(x,y) ((x>y)? true:false)


class mat2
{
    float operator() (unsigned int r, unsigned int c) const
    {
        if (r == 0 && c == 0)		return val[0];
        else if (r == 0 && c == 1)	return val[1];
        else if (r == 1 && c == 0)	return val[2];
        else if (r == 1 && c == 1)	return val[3];
    }

    float& operator() (unsigned int r, unsigned int c)
    {
        if (r == 0 && c == 0)		return val[0];
        else if (r == 0 && c == 1)	return val[1];
        else if (r == 1 && c == 0)	return val[2];
        else if (r == 1 && c == 1)	return val[3];
    }


private:
    float	val[4];
};

template<typename S>
class vec2
{
public:

    vec2() : x(0.0f), y(0.0f)				{	}
    vec2(float _x, float _y) : x(_x), y(_y)	{	}

    float get_x() const		{ return	x; }
    void set_x(float _x)	{ x = _x; }


    //  c(0) = a(0) + b(0);

    // r-value operator
    S operator() (unsigned int idx) const
    {
        if (idx == 0)		return	x;
        else if (idx == 1)	return	y;

        assert(0);
    }

    // l-value operator // x나 y 업데이트 되면서 바뀐다 const 하면 안됌
    S& operator() (unsigned int idx)
    {
        if (idx == 0)		return	x;
        else if (idx == 1)	return	y;

        assert(0);
    }

    // r-value operator
    S operator[] (unsigned int idx) const
    {
        if (idx == 0)		return	x;
        else if (idx == 1)	return	y;

        assert(0);
    }

    // l-value operator
    S& operator[] (unsigned int idx)
    {
        if (idx == 0)		return	x;
        else if (idx == 1)	return	y;

        assert(0);
    }



private:
    S	x, y;
};

//vec2 operator+(const vec2& a, const vec2& b)
//{
//    mat2	A;		// 2x2 matrix A
//    vec2 	c;
//
//    c(0) = a(0) + b(0);
//    c(1) = a(1) + b(1);
//
//    return	c;
//}
//
//vec2 operator-(const vec2& a, const vec2& b)
//{
//    vec2 	c;
//
//    c(0) = a(0) - b(0);
//    c(1) = a(1) - b(1);
//
//    return	c;
//}

//외부에서 template
template<typename T>
T vec2<T>::operator(); // 이렇게 해줘야한다. T vec2 라는 클래스는 없다. vec2<T> 이런 클래스만 있다.




class person {
public:

    int id;
    std::string name;

};

//
class IDGreater {
public://less 를 쓴느게 아니라 함수를 쓴다.
    bool operator()(const person &p1, const person &p2) const
    {
        return (p1.id < p2.id) ? true : false;
    }
};

struct Namegreater{
public:
    bool operator()(const person& p1 , const person& p2) const
    {
        return (p1.name> p2.name)? true : false;
    }
};
//
// int 형은 < 가 정의되어있기 때문에 따로 정의 안해도 된다.

//자바 내가 만든 클래스 에서 소트 하고 싶을때

//C++에서 compare 함수 쓴다. 자바도 , 이때 함수 포인터 쓴다.

//c: fucntion pointer
//c++: fucntion object(functor)
//어떤식으로 c++에서 구현하느냐


///////////////////////////////////////
//출력을 잘하고싶으면
template<typename T>
std::ostream& operator <<(std::ostream& os, const vec2<T>& v)
{
    os<<"[" << v(0)<<" "<< v(1)<<"]";
    return os;
}

//std::ostream& operator <<(std::ostream& os, const vec2<T>& v) 필요가 없어진다
//{
//    os<<"[" << v(0)<<" "<< v(1)<<"]";
//    return os;
//}
//std::ostream& operator <<(std::ostream& os, const vec2<T>& v)
//{
//    os<<"[" << v(0)<<" "<< v(1)<<"]";
//    return os;
//}
//op 입장에서 코드 중복이 심하다.

//매크로의 확장

typedef vec2<float> AAAA; //타입을 renameing 하는것이다. 따라서 vec2f 로 바꾸면 된다.
typedef vec2<double> vec2d;



int main()
{

    vec2<float> i,j;
    i(0)= 3.2f;
    i(1)= 1.5f;
    j(0) = 1.2f;
    j(1)= -1.3f;


    person stu[3];
    IDGreater idg; //<-fuction object
    Namegreater nameg;
    stu[0].id= 20141757;
    stu[0].name= "Sunghwan Park";

    stu[1].id= 20171636;
    stu[1].name= "Hyunkee sohn";

    stu[2].id= 20152852;
    stu[2].name= "yonghwan kim";
//    int i,k,j;
//    j=3;
//    k=5;
//
//    i=((i>j)? true : false); //특정한 타입이 필요가 없다. i와 j 가 근데 좀 짜증남
//


    std::sort(stu, stu+3,idg); //작은걸 젤 왼쪽에 놓는다. 원래
    std::sort(stu, stu+3, nameg);
    // 이때 if ( ___ < ___ ) 이걸로 비교한다. 근데 이떄 이게 정의가 안되어있으면 에러를 낸다.




//    std::cout << stu[0].id<<" "<< stu[0].name<< std::endl;
//    std::cout << stu[1].id<<" "<< stu[1].name<< std::endl;
//    std::cout << stu[2].id<<" "<< stu[2].name<< std::endl;
//
//    std::cout << stu[0].id<<" "<< stu[0].name<< std::endl;
//    std::cout << stu[1].id<<" "<< stu[1].name<< std::endl;
//    std::cout << stu[2].id<<" "<< stu[2].name<< std::endl;

//    std::cout << i(0)<< " "<<i(1)<< std::endl;
//    std::cout << j(0)<< " "<<j(1)<< std::endl;



    vec2<int> m,n;
    vec2<float> a,b;
    vec2<double> c,d;
}





