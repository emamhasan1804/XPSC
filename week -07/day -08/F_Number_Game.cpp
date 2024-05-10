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
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++) {
            int vl;
            cin>>vl;
            if(vl<=n) {
                mp[vl-1]++;
            }
        }
        for(int i=1;i<n;i++) {
            mp[i]+=mp[i-1];
        }
        int ans = n;
        for(int i=0;i<n;i++) {
            ans=min(ans,max((mp[i]-i),i));
        }
        cout<<ans<<endl;
    }
    return 0;
}
