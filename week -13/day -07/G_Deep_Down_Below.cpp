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

bool cmp(const pair<int,int> a , const pair<int,int> b) {
    if(a.first>b.first) return false;
    return true;
}

int32_t main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--) 
    {
        int n;
        cin>>n;
        vector<pair<int,int>> max_need(n);
        for(int i=0;i<n;i++) {
            int m;
            cin>>m;
            int mx = -1;
            for(int j=0;j<m;j++) {
                int x;
                cin>>x;
                mx = max(mx,x-j+1);
            }
            max_need[i].first=mx;
            max_need[i].second=m;
        }
        sort(max_need.begin(),max_need.end()) ;
        int l = max_need [0]. first,r=max_need[n-1].first;
        int ans=INT_MAX,mid;
        auto ok = [&] (int md) {
            bool flag = true;
            for(int i=0;i<n;i++) {
                if(max_need[i].first<=md) {
                    md+=max_need[i].second;
                }
                else {
                    flag = false;
                    break;
                }
            }
            return flag ;
        };
        while(l<=r) {
            mid = (l+r)/2;
            if(ok(mid)) {
                ans = mid;
                r=mid-1;
            }
            else {
                l=mid+1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
