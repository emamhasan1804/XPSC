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
    string t,p;
    cin>>t>>p;
    int n = t.size();
    vector<int> v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }
    auto ok = [&] (int mid) {
        unordered_map<int,int> mp;
        for(int i=0;i<mid;i++) {
            mp[v[i]-1] ++;
        }
        bool flag = false;
        int j =0;
        for(int i=0;i<n;i++) {
            if(t[i]==p[j] && mp[i]==0) {
                j++;
            }
            if(j==p.size()) {
                flag = true;
                break;
            }
        }
        return flag;
    };
    int m = p.size();
    int l =0,r= n, mid,ans;
    while(l<=r) {
        mid = (l+r)/2;
        if(ok(mid)) {
            ans = mid;
            l=mid+1;
        }
        else r = mid-1;
    }
    cout<<ans<<endl;
    return 0;
}
