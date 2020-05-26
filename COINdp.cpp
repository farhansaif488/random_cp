#include <bits/stdc++.h>
using namespace std;


int dp[100000]={0};

int solve(int n)
{
    //cout<<n<<endl;
    if(n==1)return 1;
    if(n==2)return 2;
    if(n==3)return 3;
    if(n==4)return 4;
    if(dp[n]!=0)return dp[n];
    //if(dp[n] != -1)return dp[n];

    int y=solve(n/2)+solve(n/3)+solve(n/4);

    if(y<n)
    {
        return dp[n]=n;
    }
    return dp[n]=y;
}

int main()
{

    int n;
    cin>>n;



    int ans = solve(n);
    cout<<ans;
}
