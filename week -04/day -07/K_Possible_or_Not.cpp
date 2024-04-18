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
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
        for(int i=0;i<n;i++) {
            cin>>v[i];
        }
        int cnt = -1;
        for(int i=0;i<n;i++) {
            if((v[i]&k)==k) {
                if(cnt==-1) cnt=v[i];
                else cnt&=v[i];
            }
        }
        if(cnt==k) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
