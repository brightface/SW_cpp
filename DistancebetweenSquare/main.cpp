#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>

using namespace std;

int main()
{

    ifstream is;
    int numtestcases;

    is.open("input.txt");

    if(is.fail())
    {
    cerr << "input file opening failed.\n";
        exit(1);
    }
is>>numtestcases;
    for (int i = 0; i < numtestcases; ++i) {

        int x1,x2,y1,y2,a,b;
        int straight, angle;
        int m,n;

        is>>x1;
        is>>y1;
        is>>x2;
        is>>y2;
        is>>a;
        is>>b;

        if((a>=x1 && a<=x2) && (b <= y2))
        {
            straight = 0;
            angle = 0;
        }
        else
        {
            if(a > x1&& a< x2)
            {
                m= a;
            }
            else if(a >= x2)
            {
                m = x2;
            }
            else if( a<=x1 )
            {
                m=x1;
            }
        }

    }



}
