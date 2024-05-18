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
        int sum = 0;
        for(int i=0;i<n;i++) {
            cin>>v[i];
            sum+=v[i];
        }
        int temp = v.front();
        sum-=v.front();
        int ans = gcd(temp,sum);
        for(int i=1;i<n;i++) {
            sum-=v[i];
            temp+=v[i];
            if(sum==0) break;
            ans = max(ans,gcd(sum,temp));
        }
        cout<<ans<<endl;
    }
    return 0;
}
