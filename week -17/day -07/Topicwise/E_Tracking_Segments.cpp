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
int ar[100007];
int t [400028];

void build(int n, int st ,int end) {
    if(st==end) {
        t[n]=0;
        return; 
    }
    int mid = (st+end)/2, left = n*2, right=left+1;
    build(left,st,mid);
    build(right,mid+1,end);
    t[n] = t[left]+t[right];
}

void update(int n,int st,int end, int ind) {
    if(ind<st || ind > end) return ;
    if(st==end) {
        t[n] = 1;
        return;
    }
    int mid = (st+end)/2, left = n*2, right=left+1;
    update(left,st,mid,ind);
    update(right,mid+1,end,ind);
    t[n] = t[left]+t[right];
}

int query (int n,int st ,int end,int i,int j) {
    if(i>end || j<st) return 0;
    if(i<=st && j>=end) return t[n];
    int mid = (st+end)/2, left = n*2, right = left+1;
    return query(left,st,mid,i,j) + query(right,mid+1,end,i,j);
}


 
int32_t main() {
   ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;cin>>t;while(t--) 
    {
        int n,m;
        cin>>n>>m;
        vector<pair<int,int>> v(n);
        for(int i=0;i<m;i++) {
            cin>>v[i].first>>v[i].second;
        }
        int q;
        cin>>q;
        vector<int> qu(q);
        for(int i=0;i<q;i++) {
            cin>>qu[i];
        }

        auto ok = [&] (int mid) {
            build(1,1,n);
            for(int i=0;i<=mid;i++) {
                update(1,1,n,qu[i]);
            }
            for(int i=0;i<m;i++) {
                int left = v[i].first, right = v[i].second;
                int sz = right-left+1;
                int oc = query(1,1,n,left,right);
                if(oc*2>sz) {
                    return true;
                }
            }
            return false;
        };

        int l = 0,r=q-1,mid,ans = -1;
        while(l<=r) {
            mid = l+(r-l)/2;
            if(ok(mid)) {
                ans = mid;
                r = mid-1;
            }
            else l = mid+1;
        }
        if(ans==-1) cout<<ans<<endl;
        else cout<<ans+1<<endl;
    }
    return 0;
}
