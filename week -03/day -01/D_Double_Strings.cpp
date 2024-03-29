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
        vector<string> v(n);
        map<string,int> mp;
        for(int i=0;i<n;i++) {
            cin>>v[i];
            mp[v[i]]++;
        }
        for(int i=0;i<n;i++) {
            bool flag = false;
            for(int j=0;j<v[i].size();j++) {
                string a,b;
                for(int k=0;k<j;k++) {
                    a+=v[i][k];
                }
                for(int k=j;k<v[i].size();k++) {
                    b+=v[i][k];
                }
                if(mp[a]>0 && mp[b]>0) {
                    flag = true;
                    break;
                }
                
            }
            cout<<flag;
        }
        cout<<endl;
    }
    return 0;
}