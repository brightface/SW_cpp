#include<iostream>
#include<fstream>

using namespace std;

int prime(int a);

int main()
{
    int a;
    int num;
    ifstream is;
    is.open("input.txt");
    is>>num;

    for (int i = 0; i < num; ++i) {

        is>>a;
        prime(a);

    }

}

int prime(int a){
    for (int i = 2; i < a; ++i) {
        if(a%i==0)
            return 1;
        else
            return 0;
    }
}
