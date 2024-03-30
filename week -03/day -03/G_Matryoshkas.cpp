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
        int cnt = 0;
        vector<int> v(n);
        for(int i=0;i<n;i++) {
            cin>>v[i];
        }
        sort(v.begin(),v.end(),greater<int>());
        map<int,int> mp;
        for(int i:v) {
            if(mp[i+1]==0) {
                mp[i]++;
            }
            else {
                mp[i+1]--;
                mp[i]++;
            }
        }
        for(auto it:mp) {
            cnt+=it.second;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
