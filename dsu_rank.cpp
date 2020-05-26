#include <bits/stdc++.h>
using namespace std;

void make_set(int v)
{
    par[v]=v;
    rankz[v]=0;
}
int find_set(int v)
{
    if(v==par[v])
    {
        return v;
    }
    return par[v]=find_set(par[v]);
}
void union_set(int a,int b)
{
    a = find_set(a);
    b = find_set(b);

    if(a!=b)
    {
        if(rankz[a]<rankz[b])
        {
            swap(a,b);
        }
        par[b]=a;
        rankz[a]++;
    }
}
