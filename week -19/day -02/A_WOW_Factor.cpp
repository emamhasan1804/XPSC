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
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int n = s.size();
    int cnt=0;
    vector<int> v(n);
    for(int i=0;i<n;i++) {
        if(s[i]=='v') {
            cnt++;
        }
        else {
            if(cnt>1) {
                v[i]=cnt-1;
            }
            cnt=0;
        }
    }
    if(s.back()=='v' && cnt>1) v[n-1]=cnt-1;
    vector<int> pre(n),suf(n);
    pre[0]=v[0];
    int ase = 0;
    for(int i:v) ase+=i;
    for(int i=1;i<n;i++) {
        pre[i]=pre[i-1]+v[i];
    }
    suf[n-1]=v[n-1];
    for(int i=n-2;i>=0;i--) {
        suf[i]=suf[i+1]+v[i];
    }
    int ans = 0;
    for(int i=0;i<n;i++) {
        if(s[i]=='o') {
            int x = pre[i];
            int y = ase-pre[i];
            ans += (x*y);
        }
    }
    cout<<ans<<endl;
    return 0;
}
