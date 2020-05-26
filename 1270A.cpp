#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n,n1,n2;
    cin>>n>>n1>>n2;
    vector<int> v1,v2;
    for(int i=0;i<n1;i++)
    {
        int x;
        cin>>x;
        v1.push_back(x);
    }
    for(int i=0;i<n2;i++)
    {
        int x;
        cin>>x;

        v2.push_back(x);
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());//
    while(n1 >0 && n2 >0)
    {
        int i=0;
        int j=2;
        if(v1[i]>v2[i] && j%2==0)
        {
            v1.push_back(v2[i]);
            v2[i]=0;
            n2--;
        }
        if(v1[i]<v2[i] && j%2==1)
        {
            v2.push_back(v1[i]);
            v1[i]=0;
            n1--;

        }
        i++,j++;
    }
    if(n1==0)
    {
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
    return 0;
}
