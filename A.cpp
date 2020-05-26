#include <bits/stdc++.h>

using namespace std;
#define lld long long
int main()
{
    lld t;
    cin>>t;

    while(t--)
    {
        lld r,g,b;
        cin>>r>>g>>b;
        lld ct = 0;
        lld mx = max(r,max(g,b));
        if(r==b && b==g)
        {
            cout<<r<<endl;
            continue;
        }
        if(r==g && r!=b && mx==r)
        {
            cout<<r+(b/2)<<endl;
            continue;
        }
        if(g==b && g!=r && mx ==g)
        {
            cout<<g+(r/2)<<endl;
            continue;
        }
        if(r==b && r!=g && mx== b)
        {
            cout<<r+(g/2)<<endl;
            continue;
        }

        if(mx != r && mx!=b )
        {
            int sum=r+b;
            if(sum>mx)
            {
                cout<<mx<<endl;
                continue;
            }
            else if(sum <mx)
            {
                cout<<sum<<endl;
                continue;
            }
            cout<<sum<<endl;
            continue;
        }

        if(mx != b && mx!=g )
        {
            int sum=b+g;
            if(sum>mx)
            {
                cout<<mx;
                continue;
            }else if(sum <mx)
            {
                cout<<sum<<endl;
                continue;
            }
            else{
                cout<<sum<<endl;
                continue;
            }
        }
            if(mx != r && mx!=g )
            {
            int sum=r+g;
            if(sum>mx)
            {
                cout<<mx<<endl;
                continue;
            }else if(sum <mx)
            {
                cout<<sum<<endl;
                continue;
            }
            else{
                cout<<sum<<endl;
                continue;
            }

        }
    }
}
