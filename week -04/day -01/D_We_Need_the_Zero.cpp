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
        int k = 0;
        for(int i=0;i<n;i++) {
            cin>>v[i];
            k = k^v[i];
        }
        int ans =0;
        for(int i:v) {
            ans = ans^((i^k));
        }
        // cout<<ans<<endl;
        if(ans==0) cout<<k<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}