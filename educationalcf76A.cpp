#include <bits/stdc++.h>
using namespace std;

int main()
{

    string a;
    cin>>a;
    int x[100]={0};
    for(int i=0;i<a.length();i++)
    {
      char b=a[i];
      for(int j=i;j<a.length()-i;j++)
      {
          if(x[i]==0 && a[j]==b)
          {
              x[i]++;
          }
      }
    }

    for(int i=0;i<a.length();i++)
    {
        if(x[i]==1)
        {
            cnt++;
        }
    }
}
