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
        sort(v.begin(),v.end());
        auto ok = [&] (int m) {
            int cnt = 1;
            int l = 0;
            for(int r =0;r<n;r++) {
                if(v[r]-v[l]>2*m) {
                    cnt ++;
                    l=r;
                }
            }
            if(cnt<=3) return true;
            return false;
        };
        int l=0,r=1e9,mid,ans=0;
        while(l<=r) {
            mid = (l+r)/2;
            if(ok(mid)) {
                ans = mid;
                r = mid-1;
            }
            else l=mid+1;
        }
        cout<<ans<<endl;
    }
    return 0;
}
