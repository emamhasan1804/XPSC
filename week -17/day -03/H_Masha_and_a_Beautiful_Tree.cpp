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

int cnt;

bool fun(int l,int r,int st,int end,vector<int> & v) {
    if(l==r) return true;
    int n = l+((r-l)/2);
    int mid = st+((end-st)/2);
    if(v[l]>=st && v[l]<=mid) {
        for(int i=l;i<=n;i++) {
            if(v[i]>mid) return false;
        }
        bool a = fun(l,n,st,mid,v);
        bool b = fun(n+1,r,mid+1,end,v);
        return a&b;
    }
    else if(v[l]>mid && v[l]<=end) {
        cnt++;
        for(int i=l;i<=n;i++) {
            if(v[i]<=mid) return false;
        }
        bool a = fun(l,n,mid+1,end,v);
        bool b = fun(n+1,r,st,mid,v);
        return a&b;
    }
}

int32_t main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--) 
    {
        int n;
        cin>>n;
        cnt = 0;
        vector<int> v(n+1);
        for(int i=1;i<=n;i++) {
            cin>>v[i];
        }
        bool flag = fun(1,n,1,n,v);
        if(!flag) cout<<-1<<endl;
        else cout<<cnt<<endl;
    }
    return 0;
}
