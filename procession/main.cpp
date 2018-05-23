#include <iostream>
#include <fstream>


using namespace std;

int main() {
    fstream is;
    int numTestcases;
    is.open("input.txt");
    int a=0,b=0;
    int c;
    int k;
    int w;
    int n=0;


    is>>numTestcases;

    for (int i = 0; i < numTestcases; ++i)
    {
        is>>a;
        is>>b;
        c=a*b;


        int process1[c];
        int process2[c];
        int SumOfprocess[c];





        for (int j = 0; j <c ; ++j)
        {

            is>>k;
            process1[j]=k;

        }



        for (int n = 0; n < c; ++n) {

            is>>k;
            process2[n]=k;
        }

        for (int i1 = 0; i1 < c; ++i1) {

            SumOfprocess[i1]=process1[i1]+process2[i1];

        }


        for (int n = 1; n <=a ; ++n)
        {
            w=(c/a)*n;

            for (int j = (c/a)*(n-1); j <w ; ++j) {
                cout <<SumOfprocess[j]<< " ";
            }
            cout << endl;
        }
    }
    return 0;
}