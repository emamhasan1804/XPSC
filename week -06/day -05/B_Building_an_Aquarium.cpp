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
        int k;
        cin>>k;
        vector<int> v(n);
        for(int i=0;i<n;i++) {
            cin>>v[i];
        }
        sort(v.begin(),v.end());

        auto ok = [&] (int m) {
            int cnt = 0;
            for(int i=0;i<n;i++) {
                if(v[i]<m) cnt += m - v[i];
            }
            if(cnt<=k) return true;
            else return false;
        };

        int l = v.front(), r= l+k, ans = v.front(),mid ;
        while(l<=r) {
            mid = (l+r)/2;
            if(ok(mid)) {
                ans = mid;
                l = mid+1;
            }
            else r = mid-1;
        }
        cout<<ans<<endl;
    }
    return 0;
}
