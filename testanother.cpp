#include <bits/stdc++.h>
using namespace std;


int main()
{
    vector<int> a,ans;

    int n;

    cin>>n;
    a.push_back(0);

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }
    int sum =0;
    for(int i=0;i<=n-1;i++)
    {
        for(int j=i+1;j<=n-1;j++)
        {
            sum+= ~a[j];
            for(int k=2;k<=n-i;k++)
            {
                int x = ~a[j];
                sum+=x;
                for(int m=j+1;m<=k;m++)
                {
                    x= ~a[m];
                    sum+=x;//inverted x val;
                }
                ans.push_back(sum);
                x=0;
                sum=0;
            }

        }
    }

    sort(ans.rbegin(),ans.rend());
    cout<<ans[0];

}
