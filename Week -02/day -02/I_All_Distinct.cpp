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
        map<int,int> mp;
        int cnt = 0;
        for(int i=0;i<n;i++) {
            int vl;
            cin>>vl;
            if(mp[vl]==0) {
                mp[vl]++;
            }
            else {
                mp[vl]++;
                cnt ++;
            }
        }
        int ans;
        ans = n-cnt;
        if(cnt%2!=0) ans--;
        cout<<ans<<endl;
    }
    return 0;
}