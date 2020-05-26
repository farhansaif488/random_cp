#include <bits/stdc++.h>
using namespace std;


#define ll long long

int main()
{
    ll  t;
    cin>>t;

    while(t--)
    {
       ll n;
       cin>>n;
       vector<ll> num;
        for(int i=0;i<n;i++)
        {
            ll x;
            cin>>x;

            num.push_back(x);
        }
        ll sum=0;
        for(ll i : num)
        {
            sum+=i;
        }
        int f = 1;
        for(ll i=0;i<n;i++)
        {
            ll adel = 0;
            for(ll j=0;j<=i;j++)
            {
                    adel+=num[j];
            }
            if(adel >= sum)
            {
                cout<<"NO"<<endl;
                f=0;
                break;
            }
        }

        if(f==1)
        {
             for(ll i=1;i<n;i++)
        {
            ll adel = 0;
            for(ll j=1;j<=i+1;j++)
            {
                    adel+=num[j];
            }
            if(adel >= sum)
            {
                cout<<"NO"<<endl;
                f=0;
                break;
            }
        }
        }
        if(f==1)
        {
            cout<<"YES"<<endl;
        }
    }
}
