#include <bits/stdc++.h>
using namespace std;

bool ops(int x,int y)
{
    return ((x^y)<0);
}

int main()
{
    while(1)
    {
        int a,b;
        cin>>a>>b;

        if(ops(a,b))
        {
            cout<<"They are opposite sign\n";
        }
        else{
            cout<<"They are not opposite sign\n";
        }
    }

}
