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
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--) 
    {
        string a,b;
        cin>>a>>b;
        if(a==b) cout<<"YES"<<endl<<a<<endl;
        else if(a.back()==b.back()) cout<<"YES"<<endl<<"*"<<a.back()<<endl;
        else if(a.front()==b.front()) cout<<"YES"<<endl<<a.front()<<"*"<<endl;
        else {
            bool flag = false;
            string ans;
            for(int i=0;i<a.size()-1;i++) {
                for(int j=0;j<b.size()-1;j++) {
                    string s ;
                    s+= a[i];
                    s+=a[i+1];
                    string ss;
                    ss+=b[j];
                    ss+=b[j+1];
                    if(s==ss) {
                        flag = true;
                        ans = s;
                    }
                }
            }
            if(!flag) cout<<"NO"<<endl;
            else cout<<"YES"<<endl<<"*"<<ans<<"*"<<endl;
        }
    }
    return 0;
}
