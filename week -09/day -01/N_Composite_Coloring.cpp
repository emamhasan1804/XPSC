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
    vector<int> first_11_prime ={2,3,5,7,11,13,17,19,23,29,31};
    
    int t;cin>>t;while(t--) 
    {
        int n;
        cin>>n;
        vector<int> v(n);
        vector<int> ans(n);
        for(int i=0;i<n;i++) {
            cin>>v[i];
        }
        for(int i=0;i<n;i++) {
            for(int j=0;j<11;j++) {
                if(v[i]%first_11_prime[j]==0) {
                    ans[i]=j+1;
                }
            }
        }
        map<int,int> mp;
        for(int i=0;i<n;i++) {
            mp[ans[i]]++;
        }
        for(int i=11;i>=1;i--) {
            if(mp[i]==0) {
                for(int j=0;j<n;j++) {
                    if(ans[j]>i) {
                        ans[j]--;
                    }
                }
            }
        }
        int cnt = 0;
        for(int i=1;i<=11;i++) {
            if(mp[i]>0) cnt++;
        }
        cout<<cnt<<endl;
        for(int i:ans) cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
