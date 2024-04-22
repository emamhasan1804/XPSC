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
        int cnt = 0;
        for(int i=0;i<n;i++) {
            cin>>v[i];
            if(v[i]<0) cnt++;
        }
        sort(v.begin(),v.end());
        if(cnt%2==0) {
            int sum = 0;
            for(int i:v) {
                sum += abs(i);
            }
            cout<<sum<<endl;
        }
        else {
            int mx = INT_MAX;
            int sum = 0;
            for(int i:v) {
                sum += abs(i);
                mx = min(abs(i),mx);
            }
            sum -= 2*mx;
            cout<<sum<<endl;
        }
    }
    return 0;
}
