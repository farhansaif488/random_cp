#include <bits/stdc++.h>
using namespace std;

int maxdivide(int a ,int b) //divides a by greates divisble of b
{
    while(a%b==0)
    {
        a=a/b;
    }
    return a;
}

//function to check if a is ugly or not

int isugly(int no)
{
    no = maxdivide(no,2);
    no = maxdivide(no,3);
    no= maxdivide(no,5);
    return (no==1)? 1:0;
}

//func to get nth ugly number

int getNthUglyNum(int n )
{
    int i=1;

    int cnt = 1;//ugly num count

    /*check for all integers until cnt becomes n*/

    while(n>cnt)
    {
        i++;
        if(isugly(i))cnt++;
    }
    return i;
}

int main()
{
    int ans = getNthUglyNum(150);
    cout<<ans;
}
