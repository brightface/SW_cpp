#include <iostream>
#include <fstream>


using namespace std;
int year;
int month;
int day;
int Sumofday(int,int);

int SumofDay(int month, int day);

int main() {

    ifstream is;
    int numtestcases;
    int std_time[4]={'1582','1','1','5'};
    int input_time[3];
    int SumofAnswer;


    is>>numtestcases;

    for (int i = 0; i < numtestcases; ++i) {

        int sum_day;
        is>>year;
        is>>month;
        is>>day;

        input_time[0]=year;
        input_time[1]=month;
        input_time[2]=day;

        if(year%4!=0)

            year=
            if(month==1)
            {
                sum_day = day;

            }
            else if(month == 2)
            {
                sum_day = 1*31+day;

            }
            else if(month == 3)
            {
                sum_day = 1*31+1*28+day;

            }
            else if(month == 4)
            {
                sum_day = 1*31+28+31+day;


            }
            else if(month == 5)
            {
                sum_day = 31+28+31+30+day;
            }
            else if(month ==6)
            {
                sum_day = 31+28+31+30+31+day;
            }
            else if(month == 7)
            {
                sum_day = 31+28+31+30+31+30+day;

            }
            else if(month == 8)
            {
                sum_day = 31+28+31+30+31+30+31+day;

            }
            else if(month == 9)
            {
                sum_day = 31+28+31+30+31+30+31+31+day;

            }
            else if(month == 10)
            {
                sum_day = 31+28+31+30+31+30+31+31+30+day;

            }
            else if(month == 11)
            {
                sum_day = 31+28+31+30+31+30+31+31+30+31+day;

            }
            else if(month == 12)
            {
                sum_day = 31+28+31+30+31+30+31+31+30+31+30+day;

            }


        if(year%4==0)
        {
            //SumofAnswer=(year-std_time[0])*SumofDay(month,day);
        }



    }

}


int SumofDay(int month,int day)
{
    int sum_day;
    if(month==1)
    {
        sum_day = day;
        return sum_day;
    }
    else if(month == 2)
    {
        sum_day = 1*31+day;
        return sum_day;
    }
    else if(month == 3)
    {
        sum_day = 1*31+1*29+day;
        return sum_day;
    }
    else if(month == 4)
    {
        sum_day = 1*31+29+31+day;
        return sum_day;

    }
    else if(month == 5)
    {
        sum_day = 31 + 29 + 31 + 30 + day;
        return sum_day;
    }
    else if(month ==6)
    {
        sum_day = 31+29+31+30+31+day;
        return sum_day;
    }
    else if(month == 7)
    {
        sum_day = 31+29+31+30+31+30+day;
        return sum_day;
    }
    else if(month == 8)
    {
        sum_day = 31+29+31+30+31+30+31+day;
        return sum_day;
    }
    else if(month == 9)
    {
        sum_day = 31+29+31+30+31+30+31+31+day;
        return sum_day;
    }
    else if(month == 10)
    {
        sum_day = 31+29+31+30+31+30+31+31+30+day;
        return sum_day;
    }
    else if(month == 11)
    {
        sum_day = 31+29+31+30+31+30+31+31+30+31+day;
        return sum_day;
    }
    else if(month == 12)
    {
        sum_day = 31+29+31+30+31+30+31+31+30+31+30+day;
        return sum_day;
    }





    std::cout << "Hello, World!" << std::endl;
    return 0;
}