#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;

    cin>>a>>b>>c;


    int ti;
    int d=max(a,max(b,c));
    if(a==d){
        ti = max(0,a-(b+c-1));
    }
    else if(b==d)
    {
        ti = max(0,b-(a+c-1));
    }
    else{
            ti = max(0,c-(a+b-1));
    }
    cout<<ti;
}
