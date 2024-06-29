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

// bool cmp(const pair<int,int> a , const pair<int,int> b) {
//     if(a.first>b.first) return false;
//     else if(a.first<b.first) return true;
//     else if(a.second>b.second) return false;
//     return true;
// }
vector<pair<int,int>> v;  // first e loss , second e investment
map<int,int> dp;
int knapsack(int vl) {
    if(dp.count(vl)) {
        return dp[vl];
    }
    int l=0,r=v.size()-1,ind=-1,mid;
    while(l<=r) {
        mid = (l+r)/2;
        if(v[mid].second<=vl) {
            ind = mid;
            r = mid-1;
        }
        else l = mid+1;
    }
    if(ind==-1) return dp[vl]=0;
    int exp = (((vl-v[ind].second)/v[ind].first)+1)*2;
    int baki = vl - ((((vl-v[ind].second)/v[ind].first)+1)*v[ind].first);
    return dp[vl] = exp + knapsack(baki);
}

int32_t main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>> init(n);
    vector<pair<int,int>> temp(n);
    for(int i=0;i<n;i++){
        cin>>init[i].first;
    }
    for(int i=0;i<n;i++){
        cin>>init[i].second;
        temp[i]={init[i].first-init[i].second,init[i].first};
    }
    sort(temp.begin(),temp.end());
    for(auto it:temp) {
        if(v.empty()) {
            v.push_back(it);
        }
        else if(v.back().second>it.second) v.push_back(it);
    }
    int ans = 0;
    while(m--) {
        int vl;
        cin>>vl;
        ans += knapsack(vl);
    }
    cout<<ans<<endl;
    return 0;
}
