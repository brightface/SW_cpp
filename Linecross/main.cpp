#include <iostream>
#include<fstream>

using namespace std;

int main() {

    int num, numtestcases;
    ifstream is;
    is.open("input.txt");
    is >> numtestcases;

    while (numtestcases != 0) {

            is >> num;

            for (int j = 0; j <num; ++j) {
                for (int k = 0; k <num ; ++k) {
                 if(k==num/2&&j==num/2)
                 {
                     cout<<'0';
                 }

                  else if(k==num/2&& j!=num/2)
                 {
                    cout<<'I';
                 }
                    else if(j==num/2)//(k==num+1/2&& k/2!=num)
                 {
                     cout<<'+';
                 }
                    else if(j+k==num-1)
                 {
                     cout<<'*';
                 }
                    else
                     cout<<'.';
                }
            cout<<""<<endl;
            }

        }
     numtestcases--;

}