#include <iostream>
#include <cassert>
// <<ostream
// >>istream
class mat2
{
public: //이거 오퍼레이터 이해 안하기 어렵다
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


class vec2
{
public:
    vec2() : x(0.0f), y(0.0f)				{	}
    vec2(float _x, float _y) : x(_x), y(_y)	{	}

//    int a,b,c;
//    c=3;
//    a=b=c;
    vec2& operator=(const vec2& r)
    {
        (*this)(0)= r(0);
        (*this)(1)= r(1);
    //동적할당 하려면 여기에 메모리 주소랑 메모리 크기를 할당 해줘야 한다.
        //동적할당 때문에 *p 때문에 이거 만드는것이다.
        //이것 없으면 안만들어도 돼.




    }




    vec2& operator=(vec2& l, const vec2& r) //업데이트된 레퍼런스가 리턴되야하기 때문에 & operator 쓴다.
    {

    }







    //vec2 i, k;
    //k=-i; 이럴때 i 값 바뀌면 안된다. const

    vec2 operator-() const
    {
        vec2 c;
        c(0)= -(*this)(0); // 이거 this. 이 아니고 함수 연산자로 들어가네
        c(1)= -(*this)(1);
    }//



    float get_x() const		{ return	x; }
    void set_x(float _x)	{ x = _x; }


     //  c(0) = a(0) + b(0);

    // r-value operator
    float operator() (unsigned int idx) const
    {
        if (idx == 0)		return	x;
        else if (idx == 1)	return	y;

        assert(0); //0또는 1이 안들어오면 죽인다. c헤더 파일이다.
    }

    // l-value operator
    float& operator() (unsigned int idx)
    {
        if (idx == 0)		return	x;
        else if (idx == 1)	return	y;

        assert(0);
    }

    // r-value operator
    float operator[] (unsigned int idx) const
    {
        if (idx == 0)		return	x;
        else if (idx == 1)	return	y;

        assert(0);
    }

    // l-value operator
    float& operator[] (unsigned int idx)
    {
        if (idx == 0)		return	x;
        else if (idx == 1)	return	y;

        assert(0);
    }



private:
    float	x, y;
//  char *p; //이거 때문에 전형적인 대입연산자 만든다. 얉은 카피를 일어나지 않게 하기 위해서 , 깊은 카피를 일어나게 해야한다.


};

vec2 operator-(const vec2& a)  //vec2 에 있지 않은 단항 연산자
{
    vec2 c;
    c(0)= -a(0); // 이거 this. 이 아니고 함수 연산자로 들어가네
    c(1)= -a(1);

    return c;

}//
std::ostream& operator<<(std::ostream& os, const vec2& a) // 실제 화면은 그대로 인데 리턴값을 화면의 복사값을 리턴? ㄴㄴ 실제 화면을 리턴 따라서 레퍼런스를 불러와야함
{
    os<< "[" <<a(0)<<" "<<a(1)<< "]";

    return os;

}

std::ostream& operator<<(std::ostream& os, const mat2& a)
{
    os<< a(0,0)<< " " << a(0,1)<<std::endl;
    os<< a(1,0)<< " " << a(1,1);
}

vec2 operator+(const vec2& a, const vec2& b)
{
    mat2	A;		// 2x2 matrix A
    vec2 	c;

    c(0) = a(0) + b(0);
    c(1) = a(1) + b(1);

    return	c;
}

vec2 operator-(const vec2& a, const vec2& b)
{
    vec2 	c;

    c(0) = a(0) - b(0); //a(0) read만 함 된다. r -value c(0)는 write는 한다 l- value를 한다.
    c(1) = a(1) - b(1);

    return	c;
}

//이항연산자 이다 <현재의 화면> std::cout "<<" k<내가 찍고싶은것;//
//operator<< (std::ostream)



int main()
{
    vec2	i, j, k;
    mat2 A;
    i = vec2(3.0f, 5.0f);
    j = vec2(4.0f, 1.0f);
    k = i + j;
    k = i - j;

    i(0)=-1;

    A(0,0)= -1.2f;  A(0,1)= 3.2f;
    A(1,0) = 0.0f;  A(1,1)= 1.2f;
    std::cout <<A <<std::endl;


//    int i,j,k;
//    "std::cout <<i"<< j<<k<<std::endl; //화면에 업데이트된 것을 리턴해야돼

//    std::cout << k(0) << "     " << k(1) << std::endl;

    return	0;
}


-------------------------------------------------------------------------
연산자 중복 클래스의 멤버함수로 구현, 비멤버함수로 구현
class vec3{
private:
    int x;

};

class vec5{
public:
    friend vec3.x;
};

//c
int i;
float f=3.14f;

i=(int) f;
i = int(f); //자바스타일


operator int() const
{
    return isbn;
}
 우와 이렇게도 리캐스팅 되는구나.
operator 포인터형으로 리캐스팅도 된다.

class Myclass
{
private:
    int sales,profit;
    //sub()는 company의 전용 부분에 접근할수 있다.
    friend void sub(company& c);
    friend class Manager; //트위터같이 단방향성, 페이스북은 서로서로 볼수있다. 한명만 볼수있다.


};




