#include <iostream>
#include<fstream>

using namespace std;

int main() {

    int num,numtestcases;
    ifstream is;
    is.open("input.txt");
    is>>numtestcases;

    int *a = new int[num];//동적 할당은 반드시 포인터 써줘야함! 배열로 주소값 못가르켜
    int d;
    for (int i = 0; i < numtestcases; ++i) {
        is>>num;
        for (int j = 0; j < num; ++j) {
            is>>a[j];
        }
        d=a[0];
        for (int k = 1; k < num; ++k) {

            d=d*a[k];
            d=d%10;
        }

    cout<<d<<endl;
    }
}