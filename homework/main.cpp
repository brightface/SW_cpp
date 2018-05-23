#include<iostream>
#include<fstream>

using namespace std;
int w=0;
int m=0;
int main() {

    int num=0;
    ifstream is;
    is.open("input.txt");
    is >> num;
    int b=1;
    int numtest;
    int a[numtest];

    for (int i = 0; i < num; ++i) {

        is >> numtest;

        for (int j = 0; j < numtest; j++)
            is >> a[j];


        for (int k = 0; k < numtest; ++k) {

            b = b * a[k];

        }

        do {
            b = b / 10;

            if (b % 10 == 0) {
                w = w + 1;
            }

        } while (b % 10 == 0);
        printf("%d\n", w);


    }
    is.close();

    }

