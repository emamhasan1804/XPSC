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
        t[n] = ar[st];
        return;
    }
    int mid = (st+end)/2, left = 2*n, right = left+1;
    build(left,st,mid);
    build(right,mid+1,end);
    t[n] = t[left]+t[right];
}

void update (int n,int st,int end,int ind, int vl) {
    if(ind<st || ind>end) return;
    if(st==end) {
        t[n] += vl;
        return;
    }
    int mid = (st+end)/2, left = 2*n, right = left+1;
    update(left,st,mid,ind,vl);
    update(right,mid+1,end,ind,vl);
    t[n] = t[left]+t[right];
}

void remove (int n, int st, int end, int ind) {
    if(ind<st||ind>end) return;
    if(st==end) {
        cout<<t[n]<<endl;
        t[n] = 0;
        return;
    }
    int mid = (st+end)/2, left = 2*n, right = left+1;
    remove(left,st,mid,ind);
    remove(right,mid+1,end,ind);
    t[n] = t[left]+t[right];
}

int query(int n,int st,int end,int i,int j) {
    if(i>end || j<st) {
        return 0;
    }
    if(i<=st && j>=end) {
        return t[n];
    }
    int mid = (st+end)/2, left = 2*n, right = left+1;
    return query(left,st,mid,i,j) + query(right,mid+1,end,i,j);
}

int32_t main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int k = 1;
    int tc;cin>>tc;while(tc--) 
    {
        int n,q;
        cin>>n>>q;
        for(int i=1;i<=n;i++) {
            cin>>ar[i];
        }
        build(1,1,n);
        cout<<"Case "<<k<<":"<<endl;
        k++;
        while(q--) {
            int opt;cin>>opt;
            if(opt==1) {
                int ind;cin>>ind;
                remove(1,1,n,ind+1);
            }
            else if(opt==2) {
                int ind,vl;
                cin>>ind>>vl;
                update(1,1,n,ind+1,vl);
            }
            else {
                int i,j;
                cin>>i>>j;
                cout<<query(1,1,n,i+1,j+1)<<endl;
            }
        }
    }
    return 0;
}
