    #include <bits/stdc++.h>
    using namespace std;
    #define Fast_read        ios_base::sync_with_stdio(false);
    #define ll                 long long
    #define MAXN            200007

    int main ()
    {
        Fast_read

        ll n, m, x, y, cnt = 0;
        cin >> n >> m;

        vector <pair <ll, ll> > vec;


        for (int i = 0; i<m; i++)
        {
            cin >> x >> y;

            vec.push_back(make_pair(y,x));
        }
        sort(vec.begin(), vec.end());/
        reverse(vec.begin(), vec.end());

        for (int i = 0; i<vec.size() && n; i++)
        {
            int x = vec[i].first; int y = vec[i].second;
            //cout << "X = " << x <<  " Y = " << y << endl;

            if (n >= y) {cnt += (y*x); n -= y;}
            else {cnt += (n*x); n -= n;}
        }
        cout << cnt << endl;

        return 0;
    }


