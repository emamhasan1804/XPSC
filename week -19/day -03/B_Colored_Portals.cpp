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
        int n,q;
        cin>>n>>q;
        vector<string> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        map<string,int> mp;
        mp["BG"]=-1;
        mp["BR"]=-1;
        mp["BY"]=-1;
        mp["GR"]=-1;
        mp["GY"]=-1;
        mp["RY"]=-1;
        vector<int> pre(n);
        for(int i=0;i<n;i++) {
            mp[v[i]]=i;
            int x = -1;
            for(auto it:mp) {
                if(it.first==v[i]) continue;
                string temp = it.first;
                if(temp[0]==v[i][0] || temp[0]==v[i][1] || temp[1]==v[i][0] || temp[1]==v[i][1]) {
                    x = max(x,it.second);
                }
            }
            pre[i]=x;
        }
        mp.clear();
        mp["BG"]=LLONG_MAX;
        mp["BR"]=LLONG_MAX;
        mp["BY"]=LLONG_MAX;
        mp["GR"]=LLONG_MAX;
        mp["GY"]=LLONG_MAX;
        mp["RY"]=LLONG_MAX;
        vector<int> suf(n);
        for(int i=n-1;i>=0;i--) {
            mp[v[i]]=i;
            int x = LLONG_MAX;
            for(auto it:mp) {
                if(it.first==v[i]) continue;
                string temp = it.first;
                if(temp[0]==v[i][0] || temp[0]==v[i][1] || temp[1]==v[i][0] || temp[1]==v[i][1]) {
                    x = min(x,it.second);
                }
            }
            if(x==LLONG_MAX) suf[i]=-1;
            else suf[i]=x;
        }
        while(q--) {
            int a,b;
            cin>>a>>b;
            a--;b--;
            if(b<a) swap(a,b);
            if(v[a][0]==v[b][0] || v[a][0]==v[b][1] || v[a][1]==v[b][0] || v[a][1]==v[b][1]) {
                cout<<b-a<<endl;
            }
            else if(suf[a]<b && suf[a]!=-1) {
                cout<<b-a<<endl;
            }
            else {
                int ans = LLONG_MAX;
                if(pre[a]!=-1) {
                    ans = (b-pre[a])+(a-pre[a]);
                }
                if(suf[b]!=-1) {
                    int x = (suf[b]-a)+(suf[b]-b);
                    ans = min(ans,x);
                }
                if(ans==LLONG_MAX) cout<<-1<<endl;
                else cout<<ans<<endl;
            }
        }
    }
    return 0;
}
