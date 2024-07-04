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

bool cmp(const tuple<int,int,int> a , const tuple<int,int,int> b) {
    if(get<0>(a) < get<0>(b)) return false;
    else if(get<0>(a)>get<0>(b)) return true;
    else {
        if(get<1>(a)>get<1>(b)) return false;
        else if(get<1>(a)<get<1>(b)) return true;
        else {
            if(get<2>(a)>get<2>(b)) return false;
            return true;
        }
    }
}

int32_t main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--) 
    {
        int n,m,h;
        cin>>n>>m>>h;
        vector<vector<int>> v(n);
        vector<tuple<int,int,int>> tp;
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                int vl;
                cin>>vl;
                v[i].push_back(vl);
            }
            sort(v[i].begin(),v[i].end());
            int cnt =0,sum=0,time=0;
            for(auto it:v[i]) {
                time+=it;
                if(time>h) break;
                cnt++;
                sum += time;
            }
            tp.push_back(tuple(cnt,sum,i));
            // cout<<cnt<<" "<<sum<<" "<<time<<endl;
            // break;
        }
        sort(tp.begin(),tp.end(),cmp);
        int ans = 0;
        for(auto it:tp) {
            ans++;
            if(get<2>(it)==0) {
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
