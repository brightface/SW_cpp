#include <iostream>
#include <fstream>

using namespace std;

int sumDivisor(int num)
{
    int answer = 0;
    for(int i=1; i<num; i++){
        if(num%i == 0){
            answer += i;
        }
    }
    return answer;
}

int sumDivisor_k(int num)
{
    int answer_k=0;
    for(int i=1; i<num; i++){
        if(num%i == 0){
            answer_k=answer_k+1;
        }
    }
    return answer_k;
}

int main()
{
    int numtestcases;
    int num;
    ifstream is;
    is.open("input.txt");
    is>>numtestcases;
    for (int i = 0; i < numtestcases ; ++i) {
        is>>num;
        cout<<sumDivisor_k(num)<<" ";
        cout<<sumDivisor(num)<<endl;
    }
    is.close();
    return 0;
}//
// Created by YHK on 2018-04-09.
//

