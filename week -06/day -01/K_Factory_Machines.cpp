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
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }
    auto ok = [&] (int m) {
        int total = 0;
        for(int i:v) {
            total += m/i;
            if(total >= k) return true;
        }
        return false;
    };

    int l=1,r=1e18,mid,ans; // heighs time could be 1e18 
    while(l<=r) {
        mid = (l+r)/2;
        if(ok(mid)) {
            ans = mid;
            r = mid-1;
        }
        else l = mid + 1;
    }
    cout<<ans<<endl;
    return 0;
}
