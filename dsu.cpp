#include <bits/stdc++.h>
using namespace std;
int parent[1000]={-1};
int Size[1000]={-1};
void make_set(int v)
{
    parent[v]=v;

    Size[v]=1;
}
int find_set(int v)
{
    if(v==parent[v])
    {
        return v;
    }
    return find_set(parent[v]);
}
//union by size
void union_set(int a,int b)
{
    a = find_set(a);
    b = find_set(b);
    if(a!=b)
    {
        if(Size[a]<Size[b])
        {
            swap(a,b);
        }
        parent[b]=a;
        Size[a]+=Size[b];
    }
}
int main()
{
    for(int i=1;i<=3;i++)
    {
        make_set(i);
    }
    union_set(1,2);
    union_set(2,3);
    for(int i=1;i<=3;i++)
    {
        cout<<parent[i]<<endl;
    }
}
