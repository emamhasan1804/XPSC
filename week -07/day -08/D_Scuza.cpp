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
        int n,q;
        cin>>n>>q;
        vector<int> v(n);
        for(int i=0;i<n;i++) {
            cin>>v[i];
        }
        vector<int> pre(n);
        pre[0]=v[0];
        for(int i=1;i<n;i++) {
            pre[i]=v[i]+pre[i-1];
        }
        vector<pair<int,int>> k(q);
        for(int i=0;i<q;i++) {
            cin>>k[i].first;
            k[i].second=i;
        }
        sort(k.begin(),k.end());
        vector<int> ans(q);
        int l=0;
        for(int i=0;i<q;i++) {
            int x = k[i].first;
            while(l<n) {
                if(v[l]>x) {
                    l--;
                    break;
                }
                l++;
            }
            if(l==n) l = n-1;
            if(l<0) {
                l=0;
                ans[k[i].second]  = 0;
                continue;
            }
            ans[k[i].second]=pre[l];
        }
       for(int i:ans) cout<<i<<" ";
        cout<<endl; 
    }
    return 0;
}
