#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
     int n;
     cin>>n;
     string res = "1";
    int zeroes = 0;
     for(int i=0;i<n;i++)
     {
         string num;
        cin >> num;
        bool beautiful = true;
        for (int i = 1; i < num.size(); i++)
            if (num[i] != '0')
                beautiful = false;
        if (num[0] > '1')
            beautiful = false;
        if (num.size() == 1 && num[0] == '0')
        {
            cout << 0 << endl;
            return 0;
        }
        if (beautiful)
            zeroes += num.size() - 1;
        else
            res = num;
     }
     cout<<res;
     for (int i = 0; i < zeroes; i++)
        cout << 0;
 
}