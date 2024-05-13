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
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }
    unordered_map<int,int> ss;
    for(int i=0;i<n;i++) {
        int x = v[i];
        unordered_map<int,int> mp;
        for(int i=2;i<=sqrt(x);i++) {
            if(x%i==0) {
                while(x%i==0) {
                    mp[i]++;
                    x/=i;
                }
            }
        }
        if(x>1) mp[x]++;
        for(auto it:mp) {
            ss[it.first]++;
        }
    }
    int mx = INT_MIN;
    for(auto it: ss) {
        mx = max(mx,it.second);
    }
    if(mx==INT_MIN) cout<<1<<endl;
    else cout<<mx<<endl;
    return 0;
}
