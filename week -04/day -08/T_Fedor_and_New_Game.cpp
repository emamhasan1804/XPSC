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
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> v(m+1);
    vector<string> v1(m+1);
    for(int i=0;i<=m;i++) {
        v1[i]="000000000000000000000";
    }
    for(int i=0;i<=m;i++) {
        cin>>v[i];
        int l = 20;
        while(v[i]>0) {
            v1[i][l]= v[i]%2+'0';
            v[i]/=2;
            l--;
        }
    }
    int cnt = 0;
    int ans = 0;
    for(int i=0;i<m;i++) {
        int cnt = 0;
        for(int j=0;j<v1[0].size();j++) {
            if(v1[i][j]!=v1[m][j]) cnt++;
        }
        if(cnt<=k) ans++;
    }
    cout<<ans<<endl;
    return 0;
}
