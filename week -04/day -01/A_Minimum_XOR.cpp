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
        for(int i=0;i<n;i++) cin>>v[i];
        int a = v[0] ;
        for(int i=1;i<n;i++) {   
            a = a^v[i];
        }
        int mn = a;
        for(int i=0;i<n;i++) {
            mn = min(mn,(a^v[i]));
        }
        cout<<mn<<endl;
    }
    return 0;
}