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
    return a.first>b.first;
}
int32_t main () 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--) 
    {
        int n;
        cin>>n;
        vector<pair<int,int>>v1(n);
        vector<pair<int,int>>v2(n);
        vector<pair<int,int>>v3(n);
        for(int i=0;i<n;i++) {
            int vl;
            cin>>vl;
            v1[i].first=vl;
            v1[i].second=i;
        }
        for(int i=0;i<n;i++) {
            int vl;
            cin>>vl;
            v2[i].first=vl;
            v2[i].second=i;
        }
        for(int i=0;i<n;i++) {
            int vl;
            cin>>vl;
            v3[i].first=vl;
            v3[i].second=i;
        }
        sort(v1.begin(),v1.end(),cmp);
        sort(v2.begin(),v2.end(),cmp);
        sort(v3.begin(),v3.end(),cmp);
        int sum = 0;
        for(int i=0;i<3;i++) {
            for(int j=0;j<3;j++) {
                if(v2[j].second==v1[i].second) continue;
                for(int k=0;k<3;k++) {
                    if(v3[k].second==v2[j].second || v1[i].second==v3[k].second) continue;
                    sum = max(sum,v1[i].first+v2[j].first+v3[k].first);
                }
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
