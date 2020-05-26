#include <bits/stdc++.h>
using namespace std;


int addOne(int x)
{
    int m=1;

    while(x&m)
    {
        x^=m;
        m<<=1;
    }
    x^=m;
    return x;
}

int main()
{
    int x;
    cin>>x;

    x=addOne(x);

    cout<<x;
    return 0;
}
