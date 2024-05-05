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
    map<int,int> mp;
    int t;cin>>t;while(t--) 
    {
        int n;
        cin>>n;
        vector<int> v;
        unordered_map<int,int> mp;
        for(int i=1;i<=n;i++) {
            int vl;
            cin>>vl;
            if(vl>=1 && vl<=n && mp[vl]==0 ) {
                mp[vl]++;
            }
            else v.push_back(vl);
        }
        sort(v.begin(),v.end(),greater<int>());
        int cnt = 0;
        bool flag = true;
        for(int i=1;i<=n;i++) {
            if(mp[i]>0) { }
            else {
                int x = v.back();
                x = x-i;
                if(v.back()%x==i) cnt++;
                else {
                    flag = false;
                    break;
                }
                v.pop_back();
            }
        }
        if(flag) cout<<cnt<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}
