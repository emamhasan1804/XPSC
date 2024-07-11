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
        int n,as=0,bs=0;
        cin>>n;
        vector<int> a,b,ans(n);
        for(int i=1;i<=n;i+=2) {
            a.push_back(i);
            b.push_back(i+1);
        }
        if(n%2) b.pop_back();
        a.pop_back();b.pop_back();
        for(int i:a) as ^= i;
        for(int i:b) bs ^= i;
        if(as==bs) {
            int x = b.back();
            bs ^= x;
            b.pop_back();
            x = n+1;
            b.push_back(x);
            bs ^= x;
        }
        int x = pow(2,20);
        a.push_back(as+x);
        b.push_back(bs+x);
        int l=0;
        for(int i:a) {
            ans[l]=i;
            l+=2;
        }
        l=1;
        for(int i:b) {
            ans[l]=i;
            l+=2;
        }
        for(int i:ans) cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
