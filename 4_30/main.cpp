#include<iostream>


class Car
{
public:
    Car():color(NULL)
    {

    }
    Car(const std::string& str)
    //밑에것과 같은것	: name(str),color(NULL)
    {
        name = str;
    }
    Car(const Car& other) //copt constructor;
            :name(other.name) ,color(other.color) //이렇게 셋팅했다면
            {					//shallow copy 컨텐츠는 하나고 포인팅 하는놈이 2개이다. 컨텐츠의 주소값이 복사된다. 동적할당에서는 shallow copy 안쓴다.

            }
    Car(const std::string& str, const char* c)
            :name(str), color(NULL)
    {
        unsigned int len = strlen(c);
        color = new char[len+1];
        memcpy(color, c, len*sizeof(char));
        color[len]='\0';
        color = new char[len+1];
        memcpy(color, other.color, len*sizeof(char));
        color[len]='\0';
        클래스 자체가 무거우니까 복사를 해서 하는게 아니라 래퍼런스로 한다.

    }//새롭게 동적할당을 받고 외부에 있는 스트링을 받고 끝남.

    ~Car()
    {
        if(other.color !=NULL)
            delete[] color; //종이 쪽지도 지우고
        color = NULL;// 종이쪽지가 가리키는것도 지우고

    }
private:
    std::string name;
    char* color;
};


    Car & operator=(const Car( other.)
    {
        return *this;
    }


int main()
{

    int i=3;
    int j(i); //j=i;//copy라 부른다.

    Car b("BMW", h("Hyundai"), a("Audi","Red"); //생성자가 문자열이다.

    Car k =h; //Car k(h); 같은 이야기이다.

}
