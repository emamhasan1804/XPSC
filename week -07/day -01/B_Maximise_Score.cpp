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
        int mn = INT_MAX;
        for(int i=0;i<n;i++) {
            if(i==0) {
                int x = abs(v[i]-v[i+1]);
                mn = min(x,mn);
            }
            else if(i==n-1) {
                int x = abs(v[i]-v[i-1]);
                mn = min(x,mn);
            }
            else {
                int a = abs(v[i]-v[i-1]);
                int b = abs(v[i]-v[i+1]);
                int x = max(a,b);
                mn = min(x,mn);
            }
        }
        cout<<mn<<endl;
    }
    return 0;
}
