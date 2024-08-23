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

int ar[200000];
int t[400000];

void build(int n,int st,int end) {
    if(st==end) {
        t[n]=ar[st];
        return;
    }
    int mid = (st+end)/2, left = 2*n, right = left+1;
    build(left,st,mid);
    build(right,mid+1,end);
    int x = log2(end-st+1);
    if(x%2) {
        t[n] = (t[left]|t[right]);
    }
    else {
        t[n] = (t[left]^t[right]);
    }
}

void update(int n, int st, int end, int ind, int vl) {
    if(ind<st || ind>end) {
        return;
    }
    if(st==end) {
        t[n]=vl;
        return;
    }
    int mid = (st+end)/2, left = 2*n, right = left+1;
    update(left,st,mid,ind,vl);
    update(right,mid+1,end,ind,vl);
    int x = log2(end-st+1);
    if(x%2) {
        t[n] = (t[left]|t[right]);
    }
    else {
        t[n] = (t[left]^t[right]);
    }
}

int32_t main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    int x = pow(2,n);
    for(int i=1;i<=x;i++) {
        cin>>ar[i];
    }
    build(1,1,x);
    while(m--) {
        int a,b;
        cin>>a>>b;
        update(1,1,x,a,b);
        cout<<t[1]<<endl;
    }
    return 0;
}
