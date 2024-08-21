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
void build(int n,int st,int end) {
    if(st==end) {
        t[n]=ar[st];
        return;
    }
    int mid,left,right;
    mid = (st+end)/2; left = n*2; right = left+1;
    build(left,st,mid);
    build(right,mid+1,end);
    t[n]=t[left]+t[right];
}
void update(int n,int st,int end,int ind,int vl) {
    if(ind < st || ind > end) return;
    if(st == end) {
        t[n]=vl;
        return;
    }
    int mid,left,right;
    mid = (st+end)/2; left = n*2; right = left+1;
    update(left,st,mid,ind,vl);
    update(right,mid+1,end,ind,vl);
    t[n]=t[left]+t[right];
}
int query(int n,int st,int end,int i,int j) {
    if(i>end || j<st) {
        return 0;
    }
    if(st>=i && end<=j) {
        return t[n];
    }
    int mid,left,right;
    mid = (st+end)/2; left = n*2; right = left+1;
    return query(left,st,mid,i,j) + query(right,mid+1,end,i,j);
}
 
int32_t main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>ar[i];
    build(1,1,n);
    while(m--) {
        int a,b,c;
        cin>>a>>b>>c;
        if(a==1) {
            update(1,1,n,b+1,c);
        }
        else {
            cout<<query(1,1,n,b+1,c)<<endl;
        }
    }
    return 0;
}
