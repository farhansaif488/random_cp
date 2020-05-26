#include<functional>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<bitset>
#include<cstdlib>
#include<cmath>
#include<set>
#include<list>
#include<deque>
#include<map>
#include<queue>
#define md(x, y)  (x + y) / 2
#define ls(x)      x << 1
#define rs(x)      x << 1 | 1
#define fileopen freopen("in.txt", "r", stdin); freopen("out.txt", "w", stdout)
#define fileclose fclose(stdin); fclose(stdout)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const double PI = acos(-1.0);
const double eps = 1e-6;
const int INF = 0x3f3f3f3f;
const int MAXN = 1000;
int a[MAXN], b[MAXN];
int n, m, s;
int main()
{
    while(scanf("%d%d", &m, &s) != EOF)
    {

        if((s == 0 && m != 1)|| (m * 9 < s))
            printf("-1 -1\n");
        else if(s == 0 && m == 1)
        {
            printf("0 0\n");
        }
        else
        {
            for(int i = 1; i <= m; i++)
            {
                a[i] = min(9, s);
                s -= min(9, s);
            }
            for(int i = m; i >= 1; i--)
                b[m - i + 1] = a[i];
            if(b[1] == 0)
            {
                int i;
                for(i = 1; i <= m; i++)
                    if(b[i] != 0)   break;
                b[i]--;
                b[1] = 1;

            }
            for(int i = 1; i <= m; i++)
                printf("%d", b[i]);
            printf(" ");
            for(int i = 1; i <= m; i++)
                printf("%d", a[i]);
            printf("\n");
        }


    }
    return 0;
}
