#include <bits/stdc++.h>
using namespace std;


int main()
{
    stack<pair<int,int>> st;


    while(1)
    {

        int new_elem;
        cin>>new_elem;
        if(new_elem <0)
        {
            break;
        }
        int new_min = st.empty()? new_elem : min(new_elem,st.top().second);
        st.push({new_elem,new_min});
    }
    int removed_elem = st.top().second;

    cout<<removed_elem<<endl;
}
