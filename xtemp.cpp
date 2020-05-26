
    #include <bits/stdc++.h>
    using namespace std;
//my taxi code

    int main()
    {
        long long int n,co=0;
        vector<int> v;
        cin>>n;
        int a[5]={0};
        for(long long int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        for(long long int i=0;i<n;i++)
        {
            a[v[i]]++;
        }



        co=a[4];
        a[4]=0;
        co=co+a[3];
        if(a[1]>0)
        {
            a[1]=a[1]-a[3];
        }

        if(a[1]<0)a[1]=0;

        if(a[2]%2==0)
        {
            co+=(a[2]/2);
        }
        else if(a[2]%2==1){
            co+=(a[2]/2);
            co++;
            a[1]=a[1]-2;
            if(a[1]<0)
            {
                a[1]=0;
            }
        }
        if(a[1]<4 &&a[1]>0)
        {
            co++;
        }
        if(a[1]>=4)
        {
          co+=(a[1]/4);

        co+=a[1]%4;
        }
        cout<<co;

    }
