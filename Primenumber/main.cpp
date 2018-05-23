#include <iostream>
#include <fstream>
#include<stdio.h>
using namespace std;

int find();

int main() {
    int x;
    int cnt;
    int size[10000];
    int d;
    int z = 1;
    int b;
    int n;
    int numtestcases;
    int Prime_num[10000] = {'0'};
    int m = 0;
    int sum;
    fstream is;
    is.open("input.txt");
    is >> numtestcases;
    for (int k = 0; k < numtestcases; ++k) {
        is >> n;
        b = 0;
        x=0;
        for (int i = 1; i <= n; i++) {
            if (n == 1) {
                printf("1 1");
                break;
            } else if (n >= 2) {
                if (i == 2) {
                    Prime_num[0] = 2;
                } else {
                    for (int j = 2; j < i; ++j) {
                        if (i % j == 0) { break; }
                        else if (j == i - 1)
                            while (1) {
                                if (Prime_num[z] != 0) { continue; }
                                else
                                    Prime_num[z] = i;
                                z++;
                                break;
                            }

                    }
                }
            }
        }




        for (int l = 0; l < z; ++l) {

            d = 0;
            if (n % Prime_num[l] != 0) {

                continue;

            }
            else
            {
                while (n % Prime_num[l] == 0)
                {
                    if (n != 1) {

                        n = n / Prime_num[l];
                        size[x]=Prime_num[l];
                        d++; //그냥 배열 해주기 위한것이 아님.
                        x++;//그냥 배열선언해주기위한것

                    }
                    else if (n == 1)
                    {
                        break;
                    }

                }

//                for (int i = 0; i < z; ++i)
//                {
//                    for (int j = i; j < z; ++j)
//                    {
//                        if (size[i] == size[j])
//                            break;
//                        else
//                            if(size[j]!=NULL)
//                            {
//                            cnt++;
//                            }
//
//                    }
//                }
////
//

//

                cout<<Prime_num[l]<<" ";
                cout<<d<<endl;
                }
            }


//
//        for (int i1 = 0; i1 < z; ++i1) {
//            printf("\n%d \n",size[i1]);
//        }
//
//        for(int i=0;i<z;i++)
//                {
//                    cnt=0;
//                    for(int j=0;j<i;j++)
//                        if(size[i]==size[j]) break;
//                    int j;
//                    if(i == j) cnt++;
//                }
//                printf("%d\n",cnt);
        }
    }








