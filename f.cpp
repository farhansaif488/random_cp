#include <bits/stdc++.h>
using namespace std;


int main()
{
    char str[4][4];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>str[i][j];
        }
    }
    int w=0,b=0,p=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(str[i][j]=='.')b++;
            if(str[i][j+1]=='.')b++;
            if(str[i+1][j]=='.')b++;
            if(str[i+1][j+1]=='.')b++;
             if(str[i][j]=='#')w++;
            if(str[i][j+1]=='#')w++;
            if(str[i+1][j]=='#')w++;
            if(str[i+1][j+1]=='#')w++;
            if(b>2 || w>2)p=1;
            b=0,w=0;
        }
    }

    if(p==1)cout<<"YES"<<endl;
    if(p==0)cout<<"NO"<<endl;
}