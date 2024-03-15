#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;
int n,m;
int dp[10005];

int knapsack(int w){
    if(w==0) return true;
    if(w<min(n,m)) return false;
    if(dp[w]!=-1) {
        return dp[w];
    }
    int option_1 = knapsack(w-n);
    int option_2 = knapsack(w-m);
    return dp[w] = option_1 || option_2;
}

int32_t main()
{
    int w;
    cin>>n>>m>>w;
    for(int i=0;i<=w;i++) {
        dp[i] = -1;
    }
    if(knapsack(w)) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}