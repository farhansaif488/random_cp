#include <bits/stdc++.h>
using namespace std;

int column[20]={0},diagonal1[40]={0},diagonal2[40]={0};
int queen[64]={0};
void nqueen(int at,int n)
{
    if(at==n+1)//at  is x val
    {
        printf("(row,column) : ");
        for(int i=1;i<= n;i++)
        {
            printf("(%d,%d)",i,queen[i]);
        }
        printf("\n");
    }

    for(int i = 1;i<=n;i++)
    {
        if(column[i] || diagonal1[i+at] || diagonal2[n+i-at]) continue;

        queen[at]=i;
        column[i]=diagonal1[i+at]=diagonal2[n+i-at]=1;
        nqueen(at+1,n);
        column[i] = diagonal1[i+at]=diagonal2[n+i-at]=0;

    }
}


int main()
{
    nqueen(1,4);
}
