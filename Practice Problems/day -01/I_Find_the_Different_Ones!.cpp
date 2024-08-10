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
        vector<int> v(n),temp(n);
        for(int i=0;i<n;i++) {
            cin>>v[i];
            temp[i]=-1;
        }
        int l=0;
        for(int i=1;i<n-1;i++) {
            if(v[i]!=v[l]) {
                temp[i]=l;
                if(v[i+1]!=v[i]) l=i;
            }
            else {
                l=i;
            }
        }
        for(int i=n-1;i>=0;i--) {
            if(v[i]!=v[n-1]) {
                temp[n-1]=i; 
                break;
            }
        }
        // for(int i:temp) cout<<i<<" ";
        // cout<<endl;
        int q;
        cin>>q;
        while(q--) {
            int a,b;
            cin>>a>>b;
            a--;b--;
            if(temp[b]==-1 || temp[b]<a) cout<<"-1 -1"<<endl;
            else cout<<b+1<<" "<<temp[b]+1<<endl;
        }
        cout<<endl;
    }
    return 0;
}
