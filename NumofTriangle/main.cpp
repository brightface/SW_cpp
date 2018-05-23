#include <iostream>
#include<fstream>
#include<cstdio>

using namespace std;

int main() {

    ifstream is;

    int numtestCases;
    is.open("input.txt");
    is>>numtestCases;
    int sum=0;

    while(numtestCases!=0)
    {   int k;
        is>>k;
        for (int i = 1; i <= k; ++i)
        {
            int num;
            num =i; // 선언해주고 넘어가야한다.
            for (int j = 1; j <= i; ++j)
            {
                cout<<num<<" ";//i로 넘어가면 안된다. 왜 그러지??
                    num+=k-j;
            }
            cout<<"\n";
        }
        numtestCases--;
        }
    }
