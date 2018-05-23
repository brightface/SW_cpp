#include <iostream>
#include <fstream>


using namespace std;

int main() {
    fstream is;
    int numTestcases;
    int k;

    is.open("input.txt");

    is>>numTestcases;

    for (int i = 0; i < numTestcases; ++i)
    {

        int cnt=0;
        int w=0;
        int g=1; //이동평균의 개수
        is>>cnt;

        int process[cnt];

        for (int l = 0; l < cnt; ++l)
        {
            is>>k;
            process[l]=k;
        }

        is>>w;

        //이동평균의 개수 함수

        for (int m = 0; m < cnt; ++m)
        {
            if(m+w!=cnt)
            {
                g+=1;
            }
            else
                break;

        }

        cout<<g<<" ";

        //이동평균 구하기
        int m;//더해 가야할 idx
        int sum=0;
        int s=0;
        int p=0;
        while(p+(w-1)!=cnt)
        {
             s=0;
             sum=0; //초기화
            s=p;
            m=s+w;
            p++;
            while(s<m)
            {
                sum+=process[s];
                s++;

            }

            sum=sum/w;

            cout<<sum<<" ";


        }

        cout<<endl;


    }

    return 0;
}