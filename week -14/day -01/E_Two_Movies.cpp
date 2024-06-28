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
    return (a.first+a.second>b.first+b.second);
}

int32_t main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--) 
    {
        int n;
        cin>>n;
        vector<pair<int,int> > v(n);
        for(int i=0;i<n;i++) {
            cin>>v[i].first;
        }
        for(int i=0;i<n;i++) {
            cin>>v[i].second;
        }
        int a = 0, b = 0;
        for(auto it:v) {
            if(it.first==1 && (it.second==0||it.second==-1)) a++;
            else if(it.second==1 && (it.first==0||it.first==-1)) b++;
        }
        for(auto it:v) {
            if(it.first==1 && it.second==1) {
                if(a>b) b++;
                else a++;
            }
        }
        for(auto it:v) {
            if(it.first==-1 && it.second==-1) {
                if(a>b) a--;
                else b--;
            }
        }
        cout<<min(a,b)<<endl;
    }
    return 0;
}
