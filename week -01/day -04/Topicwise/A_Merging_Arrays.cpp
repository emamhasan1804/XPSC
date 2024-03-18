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
    vector<int> v1(m);
    for(int i=0;i<n;i++) {
        int vl;
        cin>>v[i];
    }
    for(int i=0;i<m;i++) {
        cin>>v1[i];
    }
    vector<int> ans;
    int l=0,r=0;
    while(l<n && r<m) {
        if(v[l]<=v1[r]) {
            ans.push_back(v[l]);
            l++;
        }
        else {
            while(v1[r]<v[l] && r<m) {
                ans.push_back(v1[r]);
                r++;
            }
        }
    }
    for(int i=r;i<m;i++) {
        ans.push_back(v1[i]);
    }
    for(int i=l;i<n;i++) {
        ans.push_back(v[i]);
    }
    for(int i:ans) {
        cout<<i<<" ";
    }
    return 0;
}