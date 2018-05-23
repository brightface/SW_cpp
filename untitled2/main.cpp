#include <iostream>

class Car
{
public:
    //Car(); //디폴트 생성자; 아무것도안받고 태어날때.

    Car(const std::string& company_name) //함수안에 company_name="Hyundai" 못하게 const쓴다. 그냥 받을때만 할수있게
    {       //이때 conpany_name안바꾸겠다는 내용 //
        comp_name=company_name;
    }
    Car(std::string& company_name) const //함수안에 company_name="Hyundai" 못하게 const쓴다. 그냥 받을때만 할수있게
    {       //이때 멤버변수를 안바꾸겠다는 내용 //
        comp_name=company_name;
    }
    Car(std::string& company_name) const //함수안에 company_name="Hyundai" 못하게 const쓴다. 그냥 받을때만 할수있게
        :comp_name(company_name) //선언과 동시에 초기화 이게 선언과 동시에 초기화
    {       //이때 멤버변수를 안바꾸겠다는 내용 //
       // comp_name=company_name;
    }

private:
    std::string comp_name;
};

int main() {
    int i(3); //int i=3;

    /*생성자 생성과 동시에 선언하고 싶은것.*/
    //car d;//이게 디폴트생성자
    int j;
    j=i;
}