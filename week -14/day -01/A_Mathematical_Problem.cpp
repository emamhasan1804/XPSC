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
        string s;
        cin>>s;
        bool flag = false;
        if(n==2) {
            if(s[0]!='0') cout<<s[0];
            cout<<s[1]<<endl;
            continue;
        }
        for(char c:s) {
            if(c=='0') {
                flag = true;
                break;
            }
        }
        if(flag) {
            if(n>3) {
                cout<<0<<endl;
                continue;
            }
            else if(n==3 && (s[0]=='0'||s[2]=='0')) {
                cout<<0<<endl;
                continue;
            }
            else if(n==2 && s[0]=='0' && s[1]=='0') {
                cout<<0<<endl;
                continue;
            }
        }
        vector<int> ar[n-1];
        for(int i=0;i<n-1;i++) {
            for(int j=0;j<n;j++) {
                int x = s[j]-'0';
                if(i==j) {
                    x*=10;
                    x += (s[j+1]-'0');
                    j++;
                }
                ar[i].push_back(x);
            }
        }
        int ans = LLONG_MAX;
        for(int i=0;i<n-1;i++) {
            int sum = 0;
            for(int it:ar[i]) {
                if(sum==0) sum = it;
                else if(sum==1) sum = it;
                else if(it!=1) sum+=it;
            }
            ans = min(ans,sum);
            // cout<<sum<<" ";
        }
        cout<<ans<<endl;
    }
    return 0;
}
