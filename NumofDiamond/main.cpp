/*#include <iostream>
#include<fstream>
using namespace std;

int main() {

    ifstream is;
    int num;
    int numtestCases;
    is.open("input.txt");
    is >> numtestCases;
    is>>num;
    
    while(numtestCases!=0)
    {
        for (int i = 0; i < num; ++i)
        {
            int knum=i;

            for (int j = 0; j <= (num-1)/2 ; j+=2) {

                cout<<"*"<<" ";
            }

            for (int k = 1; k <(num-1) ; k+=2) {

                cout<<"+"<<" ";

            }
        }
        numtestCases--;    
    }


}*/