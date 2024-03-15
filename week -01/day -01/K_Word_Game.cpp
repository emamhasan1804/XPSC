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
        int n = 3,m;
        cin>>m;
        map<string,int> mp;
        string ar[n][m];
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                string s;
                cin>>s;
                ar[i][j]=s;
                mp[s]++;
            }
        }
        vector<int> v(n);
        for(int i=0;i<n;i++) {
            v[i] = 0;
            for(int j=0;j<m;j++) {
                if(mp[ar[i][j]]==1) {
                    v[i] += 3;
                }
                else if(mp[ar[i][j]]==2) {
                    v[i] += 1;
                }
            }
        }
        for(int i:v) {
            cout<<i<<" ";
        }cout<<endl;
    }
    return 0;
}