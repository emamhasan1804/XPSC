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
        for(int i=0;i<n;i++) {
            cin>>v[i];
        }
        int mn = v[0];
        int mx = v[0];
        for(int i=1;i<n;i++) {
            mx = (mx|v[i]);
            mn = (mn&v[i]);
        }
        cout<<mx-mn<<endl;
    }
    return 0;
}
