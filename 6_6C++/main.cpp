#include <iostream>
#include <vector>
#include<list>
#include<cstring>

using namespace std;

void print(const std::list<int>& a);

template <typename T>
class MyVector
{
public:
    MyVector()
            :val(NULL) , reserve_size(32), data_size(0)
    {
        val = new T[reserve_size];
    }

    ~MyVector()
    {
        if(val!=NULL)
            delete[] val;
            val = NULL;
            reserve_size=0;
            data_size= 0;
    }

     void push_back(const &T i)//T형보다 무거운거 올수도 있다.
     {
         if(data_size+1>reserve_size)
         {
             T* p = new T[2*reserve_size];
             memcpy(p, val, sizeof(T)*data_size);
             //val도 있고 p 에도 있고

             delete[] val;
             val =p;

             reserve_size *=2;
             //땅문제 다 해결하고
             val[data_size]=i; //새로운 데이터가 오면 데이터 사이즈에 넣는다(마지막)
            ++data_size;

         }
     }
        int operator[] (unsigned int idx) const
        {
        return val[idx];
        }
        int &operator[] (unsigned int idx)
        {
            return val[idx];
        }


        unsigned int size() const
        {
        return data_size;
    }
    unsigned int get_id() const{return id;}
private:
//    int val[128];
        int* val; //새롭게 동적할당을 해줘야한다. 더 커지면
        unsigned int reserve_size;
        unsigned int data_size;

};

std::ostream& operator<< (std::ostream& os, const Person &p)
{
    os<<p.get_id();
    return os;
}


class Person
{
public:Person():id(-1)
    {}
    Person(const unsigned int _id:):id(_id)
    {}
private: unsigned int id;

};


int main() {
    std::list<int> l;
    std:: list<int>::iterator it;


//    std:: vector<int> arr;

    MyVector<int> arr;

    arr.push_back(3);
    arr.push_back(-3);
    arr.push_back(2);
    arr.push_back(-1);
    arr.push_back(-7);


    //size_t로 정의하는게 더 정석에 가깝다. typedef unsigned int 128 size_t; 로 일반적으로 이렇게 구현되어 있다.
//    for (/*unsigned int*/ std::size_t i = 0; i < arr.size(); ++i) {
//        std::cout<<arr[i]<<std::endl;
//    }

    for (unsigned int  i = 0; i < arr.size(); ++i) {
        std::cout<<arr.size()<<std::endl;
    }
    l.push_back(10);
    l.push_back(20);

    l.push_back(30);
    l.push_back(40);
    l.push_back(50);

    it=l.begin();
    l.insert(it,5);

    print(l);



    return 0;
}

void print(const std::list<int>& a)
{
    list<int>::const_iterator it;
    for(it=a.begin(); it!=a.end(); ++it)
    {
        std::cout<<*it <<std::endl;

    }
}

