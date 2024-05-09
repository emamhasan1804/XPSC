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
        unordered_map<int,int> mp;
        unordered_map<int,int> forpre;
        unordered_map<int,int> forsuf;
        for(int i=0;i<n;i++) {
            cin>>v[i];
            mp[v[i]]++;
            forpre[v[i]]++;
            forsuf[v[i]]++;
        }
        vector<int> pre(n);
        vector<int> suf(n);
        for(int i=n-1;i>=0;i--) {
            if(v[i]==1) forpre[1]--;
            pre[i] = forpre[1];
        }
        for(int i = 0;i<n;i++) {
            if(v[i]==0) forsuf[0]--;
            suf[i] = forsuf[0];
        }

        int cnt = 0;
        for(int i=0;i<n;i++) {
            if(v[i]==1) {
                if(mp[0]>0) cnt+= mp[0];
            }
            else mp[0]--;
        }
        for(int i=0;i<n;i++) {
            if(v[i]==0) {

            }
        }
        int mx = cnt;
        for(int i=0;i<n;i++) {
            if(v[i]==0) {
                int sum = cnt;
                sum -= pre[i];
                sum += suf[i];
                mx = max(mx,sum);
            }
            else {
                int sum = cnt;
                sum -= suf[i];
                sum += pre[i];
                mx = max(mx,sum);
            }
        }
        cout<<mx<<endl;
    }
    return 0;
}
