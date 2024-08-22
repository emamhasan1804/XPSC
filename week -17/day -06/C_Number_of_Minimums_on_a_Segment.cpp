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
int cnt[400028];

void build(int n, int st, int end) {
    if(st==end) {
        t[n]=ar[st];
        cnt[n]=1;
        return;
    }
    int mid = (st+end)/2, left = 2*n, right = left+1;
    build(left,st,mid);
    build(right,mid+1,end);
    if(t[left]==t[right]) {
        cnt[n] = cnt[left]+cnt[right];
    }
    else if(t[left]<t[right]) {
        cnt[n]=cnt[left];
    }
    else cnt[n] = cnt[right];
    t[n] = min(t[left],t[right]);
}

void update(int n,int st,int end,int ind,int vl) {
    if(ind < st || ind > end) return;
    if(st==end) {
        t[n] = vl;
        cnt[n] =1;
        return;
    }
    int mid = (st+end)/2, left = 2*n, right = left+1;
    update(left,st,mid,ind,vl);
    update(right,mid+1,end,ind,vl);
    if(t[left]==t[right]) {
        cnt[n] = cnt[left]+cnt[right];
    }
    else if(t[left]<t[right]) {
        cnt[n]=cnt[left];
    }
    else cnt[n] = cnt[right];
    t[n] = min(t[left],t[right]);
}
pair<int,int> query(int n,int st,int end,int i,int j) {
    if(i>end || j<st) {
        return {1e9+7,1e9+7};
        // return 1e9+7;
    }
    if(i<=st && j>=end) {
        return {t[n],cnt[n]};
    }
    int mid = (st+end)/2, left = 2*n, right = left+1;
    pair<int,int> a = query(left,st,mid,i,j);
    pair<int,int> b = query(right,mid+1,end,i,j);
    if(a.first<b.first) return a;
    if(b.first<a.first) return b;
    else return {a.first,a.second+b.second};
}

int32_t main() 
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++) {
        cin>>ar[i];
    }
    build(1,1,n);
    while(m--) {
        int a,b,c;
        cin>>a>>b>>c;
        b++;
        if(a==1) {
            update(1,1,n,b,c);
        }
        else {
            pair<int,int> p;
            p=query(1,1,n,b,c);
            cout<<p.first<<" "<<p.second<<endl;
        }
    }
    return 0;
}
