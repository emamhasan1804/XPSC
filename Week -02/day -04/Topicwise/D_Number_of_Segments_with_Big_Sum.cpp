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
    int l=0,r=0,sum=0,ans=0;
    sum = v[r];
    while(r<n) {
        // cout<<sum<<endl;
        if(sum>=k){
            ans += n-r;
            sum -= v[l];
            l++;
        }
        else {
            r++;
            sum += v[r];
        }
    }
    cout<<ans<<endl;
    return 0;
}
/*

2 
2 6
2 6 4
2 6 4 3
2 6 4 3 6  ---- sum=21 >= k , ans = n-r=7-4 = 3; , l--
6 4 3 6 
6 4 3 6 8 --- ans += 


*/