#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n,a,b;
    cin>>n>>a>>b;

    while(n--)
    {
        ll x;
        cin>>x;
        cout<<((a*x) % b) / a <<" ";
    }
}