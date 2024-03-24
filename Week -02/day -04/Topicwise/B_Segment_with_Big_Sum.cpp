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
    int l=0,r=0,ans=n+1,sum=0;
    sum = v[r];
    while(r<n) {
        if(sum>=k) {
            // cout<<sum<<endl;
            ans = min(ans,r-l+1);
            sum -= v[l];
            l++;
        }
        else {
            r++;
            sum += v[r];
        }
    }
    if(ans==n+1) cout<<-1<<endl;
    else cout<<ans<<endl;
    return 0;
}