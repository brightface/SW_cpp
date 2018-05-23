#include <iostream>
#include<fstream>


using namespace std;

int main() {


    int numtestCases;
    ifstream is;
    is.open("input.txt");

    int num;

    int sum=0;
    is>>numtestCases;


    for (int i = 0; i < numtestCases; ++i) {

            is>>num;
        int w[num];
        for (int j = 0; j < num; ++j) {

            is>>w[j];
        }

        for (int k = 0; k < num; ++k) {
           sum+=w[k];
        }
        cout<<sum<<endl;
        sum=0;

    }

}