#include <iostream>
#include <fstream>
 #include <cstdlib>

using namespace std;


class myDate {
private:
    const static int normalYear[12];
    const static int leapYear[12];
    const static int dayOfTheWeek[7];
    int year;
    int month;
    int day;

public:
    myDate(int year, int month, int day);


    int getMonth() const;

    int getYear() const;

    bool isLeapYear() const;

    int getDayOfWeek() const;   //0=Sunday, 1=Monday, ..., 6=Saturday
    int getDayOfYear() const;   //1=Jan.1, 2=Jan.2, ..., 366=Dec.31 (in a leap year)
    int getNumHolidays() const; //휴일수 계산
    int getNumSummerTimeDays() const; //써머타임 날짜수
    void printCalendarOfMonth() const;
}

    void main(void) {
    ifstream inStream;
    int numTestCases;

    inStream.open("input.txt");
    if (inStream.fail())
    {         cerr << "Input file opening failed.\n";         exit(1);     }

    inStream >> numTestCases;

    for (int i=0; i<numTestCases; i++)
    {         int year, month, day;

        inStream >> year >> month >> day;
        myDate date1(year, month, day), date2;

        cout << date1.getYear() << " ";
        cout << date1.getMonth() << " ";
        cout << date1.getDayOfMonth() << endl;
        cout << date1.isLeapYear() << " ";
        cout << date1.getDayOfWeek () << endl;

        inStream >> year >> month >> day;
        using namespace std;


    date2.setDayOfMonth(day);
    date2.setMonth(month);
    date2.setYear(year);

    cout << date2.getYear() << " ";
    cout << date2.getMonth() << " ";
    cout << date2.getDayOfMonth() << endl;
    cout << date2.isLeapYear() << " ";
    cout << date2.getDayOfWeek () << endl;

    inStream >> year >> month >> day;
    date2.setDate(year, month, day);

    cout << date2.getYear() << " ";
    cout << date2.getMonth() << " ";
    cout << date2.getDayOfMonth() << endl;
    cout << date2.isLeapYear() << " ";
    cout << date2.getDayOfWeek () << endl;
}

inStream.close(); }

    }
