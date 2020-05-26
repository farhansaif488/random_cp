#include <bits/stdc++.h>
using  namespace std;

#define pp pair<long int,int>
bool cmp(pp x,pp y)
{
    if(x.second != y.second)
    {
        return x.second > y.second;
    }
    return x.first>y.first;

}
int main()
{
   long int n,m;
    vector<pp> lis;
    cin>>n>>m;

    for( long int i=0;i<m;i++)
    {
        pp x;
        cin>>x.first>>x.second;
        lis.push_back({x.first,x.second});
    }

    sort(lis.begin(),lis.end(),cmp);
    long int sum =0,save=-1;
    long int i=0;
    for(i=0;i<m;i++)
    {
        if(lis[i].first >n)
        {

            break;
        }
        sum += lis[i].first * lis[i].second;
        n-=lis[i].first;
    }


    sum+=lis[i].second*n;
    cout<<sum;
}
