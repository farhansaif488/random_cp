
#include <bits/stdc++.h>
using namespace std;
#define lld long long

int fact(int x){
    int po=1;
    while(x>=1)
    {
        po*=x;
        x--;
    }
    return po;
}

int perm(int x,int r)
{
  int  s1 ,s2,ans;
  s1 = fact(x);
  s2 = fact(x-r);
  ans = s1/s2;
  return ans;
}

int main()
{


   string a,b;
   cin>>a>>b;

    int p=0,q=0,p1=0,q1=0;
    int len = a.length();

    for(int i=0;i<len;i++)
    {
        if(a[i]=='+')p++;
        if(a[i]=='-')q++;
    }

    for(int i=0;i<len;i++)
    {
        if(b[i]=='+')p--;
        if(b[i]=='-')q--;
    }

    if(p<0 || q<0){
        cout<<0;
        return 0;
    }
    if(p==0 || q==0)
    {
        if(p>0){
            double i =1/pow(2,p);
            printf("%lf",i);
            return 0;
        }
        if(q>0){
            double i = 1/pow(2,q);
            printf("%lf",i);
            return 0;
        }
    }

    int  up = perm(p+q,p)*fact(q);

    int down = pow(2,p+q);


    double ans = (double (up))/(double(down));
    printf("%lf",ans);

}

