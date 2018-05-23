#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main()
{
    ifstream is;
    int numTestCases;


    is.open("input.txt");


    is >> numTestCases; /* read the number of test cases */
    int month;
    int year;
    int sumDay;
    int Day;
    int Id;
    int normalYear []= { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int year2 []= { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int ThenumOfWeek[]{ 4, 5, 6, 0, 1, 2, 3  };
    for (int i = 0; i < numTestCases; i++)
    {
        is >> year;
        is >> month;
        is >> Day;
        Id = 0;
        sumDay = 0;
        for (int j = 1582; j < year; j++)
        {
            if (j % 400 == 0 || (j % 100 != 0 && j % 4 == 0))
            {
                sumDay += 366;
            }
            else
            {
                sumDay += 365;
            }
        }

        if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0))
        {
            for (int j = 0; j < month - 1; j++)
            {
                sumDay += year2[j];
            }
        }
        else
        {
            for (int j = 0; j < month - 1; j++)
            {
                sumDay += normalYear[j];
            }
        }

        sumDay+= Day;
        Id = sumDay % 7;
        cout << ThenumOfWeek[Id] << endl;
    }

}