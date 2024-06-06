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
    int n,m,q;
    cin>>n>>m>>q;
    vector<int> v(n+1);
    for(int i=1;i<=n;i++) {
        cin>>v[i];
    }
    vector< tuple<int,int,int> > op(m+1);
    for(int i=1;i<=m;i++) {
        int a,b,c;
        cin>>a>>b>>c;
        op[i] = make_tuple(a,b,c);
    }
    vector<int> dif(n+2);
    vector<int> operation(m+2);
    while(q--) {
        int l,r;
        cin>>l>>r;
        operation[l]++;
        operation[r+1]--;
    }
    for(int i=1;i<=m;i++) operation[i]+=operation[i-1];
    for(int i=1;i<=m;i++) {
        int a = get<0>(op[i]), b = get<1>(op[i]), c = get<2>(op[i]);
        int cnt = operation[i]*c;
        dif[a] += cnt;
        dif[b+1] -= cnt;
    }
    for(int i=1;i<=n;i++) {
        dif[i]+=dif[i-1];
        cout<<v[i]+dif[i]<<" ";
    }
    cout<<endl;
}
