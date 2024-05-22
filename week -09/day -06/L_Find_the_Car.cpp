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
    return a.first<b.first;
}

int32_t main () 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--) 
    {
        int n,k,q;
        cin>>n>>k>>q;
        vector<pair<int,int>> v(k+1);
        v[0]={0,0};
        for(int i=1;i<=k;i++){
            cin>>v[i].first;
        }
        for(int i=1;i<=k;i++){
            cin>>v[i].second;
        }
        sort(v.begin(),v.end(),cmp);
        while(q--) {
            int vl;
            cin>>vl;
            auto it = lower_bound(v.begin(),v.end(),make_pair(vl,0),cmp);
            if(it==v.end()) it--;
            else if(it->first>vl) it--;
            if(vl==it->first) cout<<it->second<<" ";
            else {
                vl -= it->first;
                int ase = it->second;
                int x = it->second;
                it++;
                int time = it->second;
                int point = it->first;
                it--;
                time -= it->second;
                point-= it->first;
                float p = time*vl/point;
                ase+=p;
                cout<<ase<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
