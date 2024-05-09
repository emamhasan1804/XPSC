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
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++) {
            cin>>v[i];
            mp[v[i]]++;
        }
        int x = -1;
        for(int i=0;i<=n;i++) {
            if(mp[i]==0) {
                x = i;
                break;
            }
        }
        v.push_back(x);
        if(k>n+1) {
            k = k%(n+1);
        }
        int cnt = 0;
        for(int i=v.size()-k;i<v.size();i++) {
            cout<<v[i]<<" ";
            cnt ++;
            if(cnt==n) break;
        }
        for(int i=0;i<n;i++) {
            if(cnt==n) break;
            cout<<v[i]<<" ";
            cnt++;
        }
        cout<<endl;
    }
    return 0;
}
