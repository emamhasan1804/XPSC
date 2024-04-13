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
    vector<int> v1;
    for(int i=0;i<=32723;i++) {
        string a = to_string(i);
        string b=a;
        reverse(b.begin(),b.end());
        if(a==b) {
            v1.push_back(i);
        }
    }
    int t;cin>>t;while(t--) 
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++) {
            cin>>v[i];
        }
        int cnt =0;
        unordered_map<int,int> mp;
        for(int i:v) {
            mp[i]++;
            for(int j:v1) {
                // if(mp[j^i]) {
                    // cout<<i<<" "<<(j^i)<<endl;
                    cnt+= mp[j^i];
                // }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
