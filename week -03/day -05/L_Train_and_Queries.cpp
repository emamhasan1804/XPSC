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
        int n,q;
        cin>>n>>q;
        map<int,int> mp;
        map<int,int> mp1;
        for(int i=1;i<=n;i++) {
            int vl;cin>>vl;
            if(mp[vl]==0) {
                mp[vl]=i;
            }
            else mp1[vl]=i;
        }
        while(q--) {
            int s,d;
            cin>>s>>d;
            if(mp[s]==0) cout<<"NO"<<endl;
            else if(mp[d]>mp[s] || mp[s]<mp1[d]) {
                cout<<"YES"<<endl;
            }
            else if(mp1[d]>mp[s]) {
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}
