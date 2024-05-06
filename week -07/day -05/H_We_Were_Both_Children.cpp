#include<bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;
/* 
When I wrote this code ,
only Allah and I knew what I did.
   
Now... only Allah knows
*/

int32_t main () 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--) 
    {
        int n;
        cin>>n;
        unordered_map<int,int> v;
        for(int i=0;i<n;i++) {
            int vl;
            cin>>vl;
            if(vl<=n) v[vl]++;
        }
        unordered_map<int,int> mp;
        for(auto it:v) {
            int x = it.first;
            for(int i=x;i<=n;i+=x) {
                mp[i]+=it.second;
            }
        } 
        int ans = 0;
        for(auto it:mp) ans = max(ans,it.second);
        cout<<ans<<endl;
    }
    return 0;
}
