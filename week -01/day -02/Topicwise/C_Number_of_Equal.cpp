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
    int n,m;
    cin>>n>>m;
    vector<int> v(n);
    vector<int> v1(m);
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }
    for(int i=0;i<m;i++) {
        cin>>v1[i];
    }
    int ans = 0;
    int l=0;
    int r=0;
    while(l<n && r<m) {
        int cnt1=0,cnt2=0,current = v[l];
        while(v[l]==current && l<n) {
            cnt1++;
            l++;
        }
        while(current>v1[r] && r<m ) {
            r++;
        }
        while(v1[r]==current && r<m) {
            cnt2++;
            r++;
        }
        ans += cnt1*cnt2;
    }
    cout<<ans<<endl;
    return 0;
}
