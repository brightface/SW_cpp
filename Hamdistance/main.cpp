#include <iostream>
#include <fstream>
#include <bitset>

using namespace std;

int main() {
    fstream is;
    int numTestcases;
    is.open("input.txt");
    is>>numTestcases;

    for (int i = 0; i < numTestcases; ++i) {
        int n1;
        int n2;
        bitset<32> a;
        bitset<32> b;
        int HamingW1=0;
        int HamingW2=0;
        int HmaingD=0;
        is>>n1;
        is>>n2;
        a=n1;
        b=n2;

        for (int j = 0; j < 32; ++j) {

            if(a[j])
            {
                HamingW1++;
            }
            if(b[j])
            {
                HamingW2++;
            }
            if(a[j]!=b[j])
            {
                HmaingD++;
            }
        }

        cout<<HamingW1<<" "<<HamingW2<<" "<<HmaingD<<endl;

    }

}