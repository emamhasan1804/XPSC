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
        int n;
        cin>>n;
        int mp ;
        for(int i=0; ;i++) {
            int x = pow(2,i);
            if(x>n) {
                mp = i-1;
                break;
            }
        }
        int temp = n;
        // cout<<mp[n]<<endl;
        int dif = n - pow(2,mp);
        string s;
        int cnt = mp+1;
        while(dif>0) {
            s+= (dif%2)+'0';
            if(s.back()=='1') cnt++;
            dif/=2;
        }
        cout<<cnt<<endl;
        cout<<temp<<" ";
        for(int i=0;i<s.size();i++) {
            if(s[i]=='1') {
                int x = pow(2,i);
                temp -= x;
                cout<<temp<<" ";
            }
        }
        for(int i=mp-1;i>=0;i--) {
            int x = pow(2,i);
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}
