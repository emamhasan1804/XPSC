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
        int mx = INT_MIN;
        for(int i=0;i<n;i++) {
            cin>>v[i];
            if(v[i]>mx) mx=v[i];
        }
        int cnt = 0;
        while(mx>0) {
            mx/=2;
            cnt++;
        }
        cnt--;
        int x = pow(2,cnt);
        float cc = 0;
        for(int i=0;i<n;i++) {
            if(v[i]>=x) cc++;
        }
        if(cc>1) cc = ceil((float)cc/2);
        cout<<cc<<endl;
    }
    return 0;
}
