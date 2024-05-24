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
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }
    map<int,int> pre;
    pre[0]=1;
    int sum = 0;
    int cnt = 0;
    for(int i=0;i<n;i++) {
        sum += v[i];
        cnt+= pre[sum-k];
        pre[sum] ++;
    }
    cout<<cnt<<endl;
    return 0;
}
