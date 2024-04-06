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
        for(int i=0;i<n-1;i++) {
            int a=v[i];
            int b=v[i+1];
            int k = a|b;
            v[i+1]=k^0;
            v[i]=0;
        }
        cout<<v.back()<<endl;
    }
    return 0;
}