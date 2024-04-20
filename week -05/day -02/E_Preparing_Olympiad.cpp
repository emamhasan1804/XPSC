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
    int n,l,r,k;
    cin>>n>>l>>r>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }
    int cnt1 = 0;
    for(int i=0;i<(1<<n);i++) {         //(1<<n = pow(2,n));
        int sum = 0;
        int cnt = 0;
        int mn = INT_MAX;
        int mx = INT_MIN;
        for(int j=0;j<n;j++) {
            if(((i >> j) & 1) ==1) {
                sum += v[j];
                cnt++;
                mn = min(mn,v[j]);
                mx = max(mx,v[j]);
            }
        }
        if(sum>=l && sum <=r && cnt>=2 && mx - mn >=k) {
            cnt1++;
        }
    }
    cout<<cnt1<<endl;
    return 0;
}
