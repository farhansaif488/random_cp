#include <bits/stdc++.h>
using  namespace std;

int par[1000]={-1};
int index[1000]={-1};
void make_set(int v)
{
    par[v]=v;
    index[v]=rand();
}
int find_set(int v)
{
    if(v==par[v])
    {
        return v;
    }
    return par[v]=find_set(par[v]);
}
void union_sets(int a,int b)
{
    a = find_set(a);
    b = find_set(b);

    if(a!=b)
    {
        if(index[a]<index[b])
        {
            swap(a,b);
        }
        par[b]=a;
    }
}
