#include <iostream>
#include <vector> //배열 이다 . 가변배열이다. array list 와 같다 자바의
#include <stack> //말그대로 스택이다.
#include <queue>
class person
{

};


int main()
{
 //   int arr[3]; // 이렇게 쓰지 마라 코딩할때
   //이렇게 짜라
    std::vector<int> arr;

    std::stack<int> s; //이건 말그대로 스택이다. 템플릿은 기본중에 기본이다. 모든 자료구조는 템플릿으로 구성되어있다.

    s.push(3);
    s.push(5);
    s.push(-1);

    while(s.empty()!=true)
    {
        int t =s.top();

        //perform tou algorithm
        std::cout<< t<< std::endl;
        s.pop();
    }

    arr.push_back(-1);
    arr.push_back(3);
    arr.push_back(-7);
    std::cout<< arr.size() << std::endl;

    for(unsigned int i=0; i<arr.size(); ++i)
    std::cout<< arr[i] << std::endl;

    std::queue<float> q;

    q.push(-4);
    q.push(5);
    q.push(-1);
    q.push(7);

    while(q.empty() !=true)
    {
        int v= q.front();

    //perform your algorithm

        q.pop();
    }

}
