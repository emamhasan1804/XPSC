#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
// template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; // for set
template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>; // for multiset
#define int long long
#define float double
#define endl '\n'

int ar[1005][1005];
int n;
bool vis[1005][1005];
vector<pair<int,int>> v = {{-1,0},{1,0},{0,-1},{0,1},{-1,-1},{-1,1},{1,1},{1,-1}};
bool valid(int ci,int cj) {
    if(ci<1 || ci>n || cj<1 ||cj>n) return false;
    return true;
}
void dfs(int si,int sj) {
    vis[si][sj]=true;
    for(auto it:v) {
        int ci = si + it.first,cj= sj + it.second;
        if(valid(ci,cj)==true && vis[ci][cj] == false && ar[ci][cj]!=1) {
            dfs(ci,cj);
        }
    }
}

void queen_check(int a,int b) {
    ar[a][b]=1;
    for(int i=1;i<=n;i++) ar[a][i]=1;
    for(int i=1;i<=n;i++) ar[i][b]=1;
    int l = a-1, r= b+1;
    while(l>0 && r<=n) {
        ar[l][r]=1;
        l--;r++;
    }
    l=a+1,r=b+1;
    while(l<=n && r<=n) {
        ar[l][r]=1;
        l++;r++;
    }
    l=a-1,r=b-1;
    while(l>0 && r>0) {
        ar[l][r]=1;
        l--;r--;
    }
    l=a+1,r=b-1;
    while(l<=n && b>0) {
        ar[l][r]=1;
        l++;r--;
    }
}

int32_t main() 
{
    cin>>n;
    int a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    memset(vis,false,sizeof(vis));
    memset(ar,0,sizeof(ar));
    queen_check(a,b);
    dfs(c,d);
    if(vis[e][f]) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
