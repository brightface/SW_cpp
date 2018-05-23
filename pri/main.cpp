#include <stdio.h>

int main()
{
    int n,i,j,cnt=0;


    int a[1000] = { '1','2','3','3','5','6','8','0'};
    for(i=0;i<n;i++)
    {

        for(j=0;j<i;j++)
            if(a[i]==a[j]) break;
        if(i==j) cnt++;
    }
    printf("%d",cnt);
}

