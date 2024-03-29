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

bool valid() {

}

int32_t main () 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<pair<int,int>> v={{-1,1},{-1,-1},{1,1},{1,-1}};
    int t;cin>>t;while(t--) 
    {
        int n,m;
        cin>>n>>m;
        int ar[n][m];
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                cin>>ar[i][j];
            }
        }
        int mx = INT_MIN;
        int l=-1,r=-1;
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                int sum = 0;
                int ci=i,cj=j;
                while(ci<n&&cj<m&&ci>=0&&cj>=0) {
                    sum += ar[ci][cj];
                    ci+=v[0].first;
                    cj+=v[0].second;
                }
                ci=i,cj=j;
                while(ci<n&&cj<m&&ci>=0&&cj>=0) {
                    sum += ar[ci][cj];
                    ci+=v[1].first;
                    cj+=v[1].second;
                }
                ci=i,cj=j;
                while(ci<n&&cj<m&&ci>=0&&cj>=0) {
                    sum += ar[ci][cj];
                    ci+=v[2].first;
                    cj+=v[2].second;
                }
                ci=i,cj=j;
                while(ci<n&&cj<m&&ci>=0&&cj>=0) {
                    sum += ar[ci][cj];
                    ci+=v[3].first;
                    cj+=v[3].second;
                }
                sum-=3*ar[i][j];
                mx=max(sum,mx);
            }
        }
        cout<<mx<<endl;
    }
    return 0;
}