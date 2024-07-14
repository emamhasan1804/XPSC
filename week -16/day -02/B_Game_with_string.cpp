#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
// template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; // for set
template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>; // for multiset
#define int long long
#define float double
#define endl '\n'


int32_t main() 
{
    string s;
    cin>>s;
    stack<pair<int,char>> st;
    int count = 0;
    for(int i=0;i<s.size();i++) {
        int cnt=0;
        char temp = s[i];
        while(i<s.size() && s[i]==temp) {
            cnt++;
            i++;
        }
        i--;
        if(st.empty() || st.top().second!=temp) {
            count += (cnt/2);
            cnt %=2;
            if(cnt==1) st.push({cnt,temp});
        }
        else {
            cnt ++;
            st.pop();
            count += (cnt/2);
            cnt %= 2;
            if(cnt==1) st.push({cnt,temp});
        }
    }
    if(count%2) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}
