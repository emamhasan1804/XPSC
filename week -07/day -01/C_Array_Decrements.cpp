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
        vector<pair<int,int>> v(n);
        for(int i=0;i<n;i++) {
            cin>>v[i].first;
        }
        for(int i=0;i<n;i++) {
            cin>>v[i].second;
        }
        int mx = 0;
        for(auto it:v) {
            mx = max(mx,abs(it.first-it.second));
        }
        bool flag = true;
        for(auto it:v) {
            if(it.first-mx == it.second) {

            }
            else if(it.first-mx <0 && it.second==0) {

            }
            else {
                flag = false;
                break;
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
