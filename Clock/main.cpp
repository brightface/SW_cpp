#include <cstdio>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include <string>

using namespace std;

int main()
{

    ifstream is;
    int numtestcases;
    int hour;
    int hour1;
    int hour2;

    char colon;

    string Ap;
    int min;
    int min1;
    int min2;
    int cnt;

    int num;
    is.open("input.txt");
    string a;//시간
    string b;
    string c;//받을것
    if(is.fail())
    {
        cerr << "input file opening failed.\n";
        exit(1);
    }
    is>>numtestcases;

    for (int i = 0; i < numtestcases; ++i) {

        is>>Ap;
        is>>num;

        a= Ap.substr(0.1);
        b= Ap.substr(3,4);
        c= Ap.substr(5,6);

        int intValue1 = atoi(a.c_str());
        int intValue2 = atoi(b.c_str());
        int intValue3 = atoi(c.c_str());

//        cout<<Ap<<endl;
        if(c=="PM")
        {
            cnt=0;
        }
        else
            cnt=1;

             min=intValue1%60;//나머지=분
             hour2=intValue1/60;//시간
             hour=intValue2+hour2;
            for(int j=0;j<hour;j++)
            {
                if (hour >= 12) {
                    cnt += 1;
                    if (hour > 12) {
                        hour = hour - 12;

                    }
                }
            }

            if(cnt%2==0)
            {

                if (hour < 10)
                {
                    if (min < 10)
                    {
                        cout << 0 << hour << ":" << 0 << a<<"AM"<<endl;
                    }
                    else
                    {
                        cout << 0 << hour << ":" << a<<"AM"<<endl;
                    }
                }
                else
                {
                    if(min<10)
                    {
                        cout << hour << ":" <<0<<min<<"AM"<<endl;
                    }
                    else
                    {
                        cout<<hour << ":" << a<<"AM"<<endl;
                    }
                }

            }
        else
            {

                if (hour < 10)
                {
                    if (min < 10)
                    {
                        cout << 0 << hour << ":" << 0 << a<<"PM"<<endl;
                    }
                    else
                    {
                        cout << 0 << hour << ":" << a<<"PM"<<endl;
                    }
                }
                else
                {
                    if(min<10)
                    {
                        cout << hour << ":" <<0<<min<<"PM"<<endl;
                    }
                    else
                    {
                        cout<<hour << ":" << a<<"PM"<<endl;
                    }
                }
            }











    }


    }