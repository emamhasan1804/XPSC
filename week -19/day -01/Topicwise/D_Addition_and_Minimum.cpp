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

void lazy_push(int n,int st,int end) {
    if(lazy[n]==0) return;
    t[n] += lazy[n];
    if(st!=end) {
        int left = n*2, right = left+1;
        lazy[left] += lazy[n];
        lazy[right] += lazy[n];
    }
    lazy[n]=0;
}
void build(int n,int st,int end) {
    if(st==end) {
        t[n]=ar[st];
        return;
    }
    int mid,left,right;
    mid = (st+end)/2; left = n*2; right = left+1;
    build(left,st,mid);
    build(right,mid+1,end);
    t[n]=min(t[left],t[right]);
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
    t[n]= min(t[left],t[right]);
}
int query(int n,int st,int end,int i,int j) {
    lazy_push(n,st,end);
    if(i>end || j<st) {
        return LLONG_MAX;
    }
    if(st>=i && end<=j) {
        return t[n];
    }
    int mid,left,right;
    mid = (st+end)/2; left = n*2; right = left+1;
    return min(query(left,st,mid,i,j), query(right,mid+1,end,i,j));
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
            int l,r;
            cin>>l>>r;
            l++;
            cout<<query(1,1,n,l,r)<<endl;
        }
    }
    return 0;
}
