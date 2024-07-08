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
        if(n%2) {
            if(n==1) cout<<1<<endl;
            else cout<<-1<<endl;
        }
        else {
            vector<int> v;
            int a = 0,b=n-1;
            while(a<n/2 && b>=n/2) {
                v.push_back(a);
                v.push_back(b);
                a++;
                b--;
            }
            vector<int> ans;
            ans.push_back(n);
            for(int i=1;i<n;i++) {
                if(v[i]>v[i-1]) ans.push_back(v[i]-v[i-1]);
                else {
                    int x = n+v[i];
                    ans.push_back(x-v[i-1]);
                }
            }
            for(int i:ans) cout<<i<<" ";
            cout<<endl;
        }
    }
    return 0;
}
