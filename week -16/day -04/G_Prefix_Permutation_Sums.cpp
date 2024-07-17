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
        int n;
        cin>>n;
        vector<int> v(n-1);
        for(int i=0;i<n-1;i++) cin>>v[i];
        int mx = (n*(n+1))/2;
        if(mx != v.back())  {
            v.push_back(mx);
            vector<int> temp;
            temp.push_back(0);
            temp.push_back(v.front());
            for(int i=1;i<v.size();i++) {
                temp.push_back(v[i]-v[i-1]);
            }
            sort(temp.begin(),temp.end());
            bool flag = true;
            for(int i=1;i<=n;i++) {
                if(i!=temp[i]) {
                    flag = false;
                    break;
                }
            }
            if(flag) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else {
            map<int,int> mp;
            mp[v.front()]++;
            for(int i=1;i<v.size();i++) {
                mp[v[i]-v[i-1]]++;
            }
            int cnt = 0;
            int x;
            for(auto i:mp) {
                if(i.second==2) {
                    cnt++;
                    x = i.first;
                }
                else if(i.first>n) {
                    cnt++;
                    x=i.first;
                }
            }
            if(cnt>1) cout<<"NO"<<endl;
            else {
                int sum = 0;
                for(int i=1;i<=n;i++) {
                    if(mp[i]==0) sum +=i;
                }
                if(sum==x) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
