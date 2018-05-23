#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{
  ifstream in;
  in.open("input.txt");

  int numTestCase;
  in >> numTestCase;

  for(int i=0; i<numTestCase; i++)
  {
    int n;
    in >> n;


    //위쪽 삼각형
    for(int j=1; j<=n/2; j++)
    {
        //왼.위
        for(int m=0; m<=(n/2)-j; m++)
        {
          cout << "*";
        }
        for(int k=n/2; k>=(n/2)-j+1; k--)
        {
          cout << "+";
        }

        //오.위
        for(int k=0; k<j-1; k++)
        {
          cout << "+";
        }
        for(int m=(n/2)-1; m>=j-1; m--)
        {
          cout << "*";
        }
        cout << endl;
    }

    //아래쪽 삼각형
    for(int j=1; j<=n/2+1; j++)
    {
        //왼.아
        for(int k=0; k<j-1; k++)
        {
          cout << "*";
        }
        for(int m=n/2; m>=j-1; m--)
        {
          cout << "+";
        }
        

        //오.아
        for(int m=0; m<=n/2-j; m++)
        {
          cout << "+";
        }
        for(int k=n/2-1; k>n/2-j; k--)
        {
          cout << "*";
        }
        cout << endl;
    }
  }
  return 0;
}//
// Created by YHK on 2018-04-20.
//

