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

bool cmp(const pair<int,int> a , const pair<int,int> b) {
    return a.first+a.second<b.first+b.second;
}

int32_t main () 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--) 
    {
        int n,c;
        cin>>n>>c;
        vector<pair<int,int>> v(n+1);
        for(int i=1;i<=n;i++) {
            int vl;cin>>vl;
            v[i].first = vl;
            v[i].second = i;
        }
        sort(v.begin(),v.end(),cmp);
        int cnt = 0;
        for(int i=1;i<=n;i++) {
            if(c>= v[i].first+v[i].second) {
                cnt++;
                c-= v[i].first;
                c-= v[i].second;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
