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
int t[400028];
int lazy[400028];
int mod = 1e9+7;

void lazy_push(int n,int st,int end) {
    if(lazy[n]==1) return;
    t[n] = (t[n]*lazy[n])%mod;
    if(st!=end) {
        int left = n*2, right = left+1;
        lazy[left] = (lazy[left]*lazy[n])%mod;
        lazy[right] = (lazy[right]*lazy[n])%mod;
    }
    lazy[n]=1;
}
int merge(int l,int r) {
    return (l+r)%mod;
}
void build(int n,int st,int end) {
    lazy[n]=1;
    if(st==end) {
        t[n]=1;
        return;
    }
    int mid,left,right;
    mid = (st+end)/2; left = n*2; right = left+1;
    build(left,st,mid);
    build(right,mid+1,end);
    t[n]=merge(t[left],t[right]);
}
void update(int n,int st,int end,int i,int j,int vl) {
    lazy_push(n,st,end);
    if(i>end || j<st) return;
    if(i<=st && j>=end) {
        lazy[n] = vl;
        lazy_push(n,st,end);
        return;
    }
    int mid,left,right;
    mid = (st+end)/2; left = n*2; right = left+1;
    update(left,st,mid,i,j,vl);
    update(right,mid+1,end,i,j,vl);
    t[n]=merge(t[left],t[right]);
}
int query(int n,int st,int end,int i,int j) {
    lazy_push(n,st,end);
    if(i>end || j<st) {
        return 0;
    }
    if(st>=i && end<=j) {
        return t[n];
    }
    int mid,left,right;
    mid = (st+end)/2; left = n*2; right = left+1;
    return merge(query(left,st,mid,i,j) , query(right,mid+1,end,i,j));
}

int32_t main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    build(1,1,n);
    while(m--) {
        int opt;cin>>opt;
        if(opt==1) {
            int l,r,vl;cin>>l>>r>>vl;
            l++;
            update(1,1,n,l,r,vl);
        }
        else {
            int i,j;
            cin>>i>>j;
            i++;
            cout<<query(1,1,n,i,j)<<endl;
        }
    }
    return 0;
}
