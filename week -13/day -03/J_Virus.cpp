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
    int t;cin>>t;while(t--) 
    {
        int n,m;
        cin>>n>>m;
        vector<int> v(m);
        for(int i=0;i<m;i++) cin>>v[i];
        sort(v.begin(),v.end());
        vector<int> gap;
        for(int i=0;i<m-1;i++) {
            int gp = v[i+1]-v[i]-1;
            if(gp>0) gap.push_back(gp);
        }
        int gp = n-v[m-1] + v[0]-1;
        if(gp>0) gap.push_back(gp);
        sort(gap.rbegin(),gap.rend());
        int x = 0;
        int cnt = 0;
        for(int i=0;i<gap.size();i++) {
            int xx = gap[i]-x-1;
            if(xx>0) cnt+=xx;
            else if(xx==0) cnt++;
            else break;
            x+=4;
        }
        cout<<n-cnt<<endl;
    }
    return 0;
}
