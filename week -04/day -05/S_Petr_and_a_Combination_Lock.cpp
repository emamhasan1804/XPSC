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
map<int,int> mp;
int knapsack(int n, int sum) {
    if(n<0) {
        if(sum%360==0) return true;
        else return false;
    }
    int option_1 = knapsack(n-1,sum+mp[n]);
    int option_2 = knapsack(n-1,sum-mp[n]);
    return option_1 || option_2;
}

int32_t main () 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for(int i=0;i<n;i++) {
        int vl;cin>>vl;
        mp[i]=vl;
    }
    (knapsack(n-1,0))? cout<<"YES"<<endl: cout<<"NO"<<endl;
    return 0;
}
