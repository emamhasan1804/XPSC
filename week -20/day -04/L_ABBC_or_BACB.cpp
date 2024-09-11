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
    int cs =1;
    int t_c;cin>>t_c;while(t_c--) 
    {
        string s;
        cin>>s;
        int sum = 0,flag = 0,mn=LLONG_MAX;
        for(int i=0;i<s.size();i++) {
            if(s[i]=='A') {
                int cnt = 0;
                while(i<s.size() && s[i]=='A') {
                    i++;
                    cnt++;
                }
                i--;
                sum += cnt;
                mn = min(mn,cnt);
            }
            else {
                if(i+1<s.size() && s[i+1]=='B') flag = 1;
            }
        }
        if(s[0]=='B'||s[s.size()-1]=='B'||flag==1) cout<<sum<<endl;
        else cout<<sum-mn<<endl;
    }
    return 0;
}
