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
        map<int,int> mp;
        for(int i=0;i<n;i++) {
            cin>>v[i];
            mp[v[i]]++;
        }
        sort(v.begin(),v.end());
        set<int> s;
        bool flag = true;
        for(int i:v) {
            if(mp[i]>=2) {
                s.insert(i);
            } 
            else if(flag) {
                s.insert(i);
                flag = false;
            }
            else break;
        }
        int ans = 0;
        for(int i:s) {
            if(i==ans) ans++;
            else break;
        }
        cout<<ans<<endl;
    }
    return 0;
}
