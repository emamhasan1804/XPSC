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
    int n,m;
    cin>>n>>m;
    vector<int> v(n);
    vector<int> v1(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }
    for(int i=0;i<m;i++) {
        cin>>v1[i];
    }
    int l=0,r=0,cnt=0;
    while(r<m ) {
        while(v[l]<v1[r] && l<n) {
            cnt++;
            l++;
        }
        r++;
        cout<<cnt<<" ";
    }
    cout<<endl;
    return 0;
}