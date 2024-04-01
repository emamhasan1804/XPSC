#include <bits/stdc++.h>
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
        int mn = INT_MAX;
        int mx = INT_MIN;
        int mni = -1;
        int mxi = -1;
        for(int i=0;i<n;i++) {
            cin>>v[i];
            if(v[i]<mn) {
                mn=v[i];
                mni=i;
            }
            if(v[i]>mx) {
                mx = v[i];
                mxi=i;
            }
        }
        int ans = max((mx-v[0]),max((v[n-1]-v[0]),(v[n-1]-mn)));
        for(int i=0;i<n-1;i++) {
            ans = max(ans,(v[i]-v[i+1]));
        }
        cout<<ans<<endl;
    }
    return 0;
}