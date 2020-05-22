#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin>>n;
    vector<ll> v;
    for(ll i =0;i<n;i++)
    {
        ll x;
        cin>>x;
        v.push_back(x);
    }
    ll min=v[0];
    ll mx =v[1];
    for(ll i=1;i<v.size();i++)
    {
        if(v[i]>mx)mx = v[i];
        if(min > v[i]) min = v[i];
    }
}