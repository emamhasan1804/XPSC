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
    int n,a,b;
    cin>>n>>a>>b;
    int t = 0;
    t+= min(a,b);
    n--;
    int l =0,r=2e9,mid,ans;
    auto ok = [&] (int m) {
        int cnt = 0;
        cnt += m/a;
        cnt += m/b;
        if(cnt>=n) return true;
        return false;
    };
    while(l<=r) {
        mid = (l+r)/2;
        if(ok(mid)) {
            ans = mid;
            r=mid-1;
        }
        else l = mid+1;
    }
    cout<<ans+t<<endl;
    
    return 0;
}
