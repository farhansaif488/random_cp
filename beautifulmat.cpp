#include <bits/stdc++.h>
using namespace std;


int main()
{
    int mat[5][5];
    int flag =0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>mat[i][j];
        }
    }
    int posi=0,posj=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(mat[i][j]==1)
            {
                flag = 1;
                posi=i;
                break;
            }
            if(flag==1)
            {
                posj = j;
                break;
            }
        }
    }

    int jump1 = abs(2-posi),jump2 = abs(2-posj);
    cout<<jump1+jump2;

}
