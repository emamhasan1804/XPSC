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
int ar[200007];
int t[800028];

void build(int n,int st,int end) {
    if(st==end) {
        t[n]= ar[st];
        return;
    }
    int mid = (st+end)/2, left = n*2, right=left+1;
    build(left,st,mid);
    build(right,mid+1,end);
    t[n] = t[left]+t[right];
}

int sum (int n) {
    int ans = 0;
    while(n>0) {
        ans += n%10;
        n/=10;
    }
    return ans;
}

void update(int n,int st,int end, int i,int j) {
    if(i>end || j<st) return;
    if(t[n]<=9) return;
    if(st==end) {
        t[n]= sum(t[n]);
        return;
    }
    int mid =(st+end)/2, left = n*2, right = left+1;
    update(left,st,mid,i,j);
    update(right,mid+1,end,i,j);
    t[n] = max(t[left],t[right]);
}

int query (int n, int st,int end, int ind) {
    if(ind>end||ind<st) return 0;
    if(st==end)  return t[n];
    int mid =(st+end)/2, left = n*2, right = left+1;
    return query(left,st,mid,ind) + query(right,mid+1,end,ind);
}

int32_t main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--) 
    {
        int n,q;
        cin>>n>>q;
        for(int i=1;i<=n;i++) cin>>ar[i];
        build(1,1,n);
        while( q--) {
            int a,b;
            cin>>a>>b;
            if(a==1) {
                int c;
                cin>>c;
                update(1,1,n,b,c);
            }
            else cout<<query(1,1,n,b)<<endl;
        }
    }
    return 0;
}
