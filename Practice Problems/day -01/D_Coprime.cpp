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
        vector<int> v(n);
        map<int,int> mp;
        for(int i=0;i<n;i++) {
            cin>>v[i];
            mp[v[i]]=i+1;
        }
        int ans = -1;
        for(int i=1;i<=1000;i++) {
            if(mp[i]>0) {
                for(int j=1;j<=1000;j++) {
                    if(mp[j]>0) {
                        if(gcd(i,j)==1) {
                            ans = max(ans,mp[i]+mp[j]);
                        }
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
