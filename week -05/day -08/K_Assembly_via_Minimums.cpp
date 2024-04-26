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
        int m = (n*(n-1))/2;
        vector<int> v(m);
        map<int,int> mp;
        for(int i=0;i<m;i++) {
            cin>>v[i];
            mp[v[i]]++;
        }
        sort(v.begin(),v.end(),greater<int>());
        vector<int> ans;
        ans.push_back(v.front());
        ans.push_back(v.front());
        mp[v.front()] -= 2;
        for(int i=1;i<m;i++) {
            if(mp[v[i]]>0) {
                mp[v[i]] -= ans.size();
                ans.push_back(v[i]);
            }
        }
        for(int i:ans) {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}
/*

    3 3 0 0 -2


*/
