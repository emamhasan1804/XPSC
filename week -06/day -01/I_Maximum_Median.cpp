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
    sort(v.begin(),v.end());

    auto ok = [&] (int m) {
        int cnt = 0;
        for(int i=n/2;i<n;i++) {
            if(v[i]<m) cnt += (m-v[i]);
        }
        if(cnt<=k) return true;
        return false;
    };
    
    int l = v[n/2];
    int r = l+k;
    int ans ;
    while(l<=r) {
        int mid = (r+l)/2;
        if(ok(mid)) {
            ans = mid;
            l = mid+1;
        }
        else r = mid -1;
    }
    cout<<ans<<endl;

    return 0;
}
