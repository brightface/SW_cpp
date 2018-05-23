#include <iostream>
#include <fstream>
#include<cstring>
#include<cstdlib>
#include<cstdio>

using namespace std;






int main() {

    int numtestcases,lastIdx,tmp,idxMax;
    int max;

    int j;
    /*변수선언*/
    ifstream is;
    is.open("input.txt");
    is >> numtestcases;
    /*불러오기*/
    for (int m = 0; m < numtestcases; ++m) {
        is >> j;
        int V[100] = { 0, };
        int idx[100] = { 0, };
        int count[j];
        int num[j];
        memset(count, 0, j * sizeof(int));//가변변수를 초기화할수 없습니다.
        memset(num, 0, j * sizeof(int));/*variable sized count is not be initialized.*/

        /*배열선언*/


        for (int k = 0; k < j; ++k) {
            is >> num[k];//대입


        }


        for (int i = 0; i < j; ++i) {
            for (int k = 0; k < j; ++k)//같은거 있나 찾기
            {
                if (num[i] == num[k]) {
                    count[i] += 1;//같은거 있으면 무엇이 같은가 표시
                }
            }
        }

        max = count[0];
        for (int l = 0; l < j; ++l) {//같은것의 최대값 찾기

            if (max < count[l]) {
                max = count[l];

                //최대값 찾음
            }
            //아래 조건문 뛰어 넘고 최대값 찾음
        }




        for (int n = 0; n < j; ++n) {


                if (max == count[n]) {


                    if (num[n] != num[n + 1]) {
                        if (n == 0) {
                            printf("%d ", max);
                            printf("%d ", num[n]);
                            continue;
                        } else {
                            printf("%d ", num[n]);
                            if(n==j-1)
                            {printf("\n");
                            continue;
                            }
                        }
                    }
                    else {
                        printf("%d ", max);
                        printf("%d \n", num[n]);
                        break;

                    }
                }
            }
        }
    }









