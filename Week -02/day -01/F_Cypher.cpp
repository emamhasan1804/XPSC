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
        for(int i=0;i<n;i++) {
            cin>>v[i];
        }
        vector<pair<int,string>> vp(n);
        for(int i=0;i<n;i++) {
            int vl;
            string s;
            cin>>vl>>s;
            vp[i].first=vl;
            vp[i].second=s;
        }
        for(int i=0;i<n;i++) {
            string s = vp[i].second;
            for(char c:s) {
                if(c=='U') {
                    if(v[i]==0) {
                        v[i] = 9;
                    }
                    else {
                        v[i] -= 1;
                    }
                }
                else {
                    if(v[i]==9) {
                        v[i]=0;
                    }
                    else v[i] += 1;
                }
            }
        }
        for(int i:v) {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}