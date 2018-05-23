#include <iostream>
#include <fstream>

using namespace std;

int main() {

    ifstream is;
    is.open("input.txt");
    int num=0;
    int numtestcases;
    int Prime_number[10000];
    int is_num;
    int k = 0;
    int d[10000];
    is >> numtestcases >> is_num;
    for (int i = 0; i < numtestcases; ++i) {


        //소수의 정의

            for (int j = 2; j < is_num; ++j) {
                if(is_num%j==0)
                {
                    break;
                }
                else if(j==is_num-1)
                    Prime_number[j-1]=j;
            }


