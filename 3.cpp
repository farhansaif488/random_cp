#include <bits/stdc++.h>
#define LL long long
using namespace std;


int main()
{
    int t,n;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<=n;i++)scanf("%d",&a[i]);
        bool flag = 0;

        for(int i=0;i<n;i++)
        {
            if(abs(a[i]-a[i-1])>=2)
            {
                printf("YES\n %d %d\n",i,i+1);
                flag=1;
                break;
            }
        }
        if(!flag)
        {
            printf("NO\n");
        }
    }
}
