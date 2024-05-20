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
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }
    int r=0,l=0,cnt=0,ans=0;
    map<int,int> mp;
    while(r<n) {
        if(mp[v[r]]>=1) {
            mp[v[l]]--;
            l++;
        }
        else {
            mp[v[r]]++;
            ans=max(ans,r-l+1);
            r++;
        }
    }
    cout<<ans<<endl;
    return 0;
}   
