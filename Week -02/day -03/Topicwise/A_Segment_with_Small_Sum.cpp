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
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }
    int l=0,r=0,sum=0,ans=0;
    while(r<n) {
        sum+=v[r];
        if(sum <= k) {
            ans = max(ans,r-l+1);
            r++;
        }
        else {
            sum -= v[l];
            l++;
            r++;
        }
    }
    cout<<ans<<endl;
    return 0;
}