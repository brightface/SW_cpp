#include<iostream>
#include<stack>
#include<vector>
#include<map> //이게 딕션너리가 map 이다.
#include<string>
#include<list> //더불 링크드 리스트

// std:: list 이거 써라. 이게 더블 링크드 리스트다. 구현할려고 하지말고.


class person
{
public:
    person() : id(-1), name("무명씨") {}
    person(unsigened int _id, std::String _name)
            :id(_id), name(_name)
    {}
private:
    unsigned int id;
    std::string name;
    unsigened int get_id() const {return id;}
    std::string get_name() const {return name;}
};

std::ostream& operator << (std::ostream& os, const person p)
{
    os <<" (" << p.get_id()<< ","<< p.get_name()<< ")";
    return os;
}



int main()
{
    std::list<person> l;

    l.push_back(person(20143115, "허민호"));
    l.push_back(person(20142765 , "조영선"));
    l.push_back(person(20143115, "최승호"));

    for(it=l.begin(); it!=l.end(); ++it)
        std::cout<< *it <<std::endl;


    std::map<unsigned int, std::string>         dict;
    std::map<unsigned int, std::string> ::iterator it; // 열거자 ,일종의 포인터 , 지시자, 이 자료구조에만 걸려있는 pointer
    dict[20143115]="허민호"; //20143115, "허민호"
    dict[20142765]="조영선"; // 20142765 , "조영선"
    dict[20142772]="최승호"; //

    std::cout<<dict[20142765] <<std::endl;


    std::stack<int> s;
    std::stack<int> t;

    it=dict.find(20142765) ; //어디에 있다. 그거 pointer

    if(dict.end()==it)
    {
        std::cout<<" I cannot fine the value with the key" <<std::endl;
    }
    else
    {


    // dict.end() //  이게 일종의 null 이다. pointer null

    std::cout<<it->first<< std::endl;
    std::cout<<it->second<< std::endl;
    }

    typedef std::map<unsigned int, std::string> Mymap; //이렇게 써라

    Mymap k;
    t.clear();
    while(s.empty()!=1)
    {
        t.push(s.top)));
        s.pop();

    }

    while(t.empty()!=1)
    {

    }
}

