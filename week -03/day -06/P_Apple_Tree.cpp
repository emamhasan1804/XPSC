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
vector<int>ar[200005];
bool vis[200005];
map<int,int>leaf;
int dfs(int root) {
    vis[root]=true;
    int ans=0;
    bool flag=false;
    for(int i=0;i<ar[root].size();i++) {
        if(vis[ar[root][i]]==false) {
            ans+=dfs(ar[root][i]);
            flag=true;
        }
    }
    return leaf[root]=(flag)? ans:1;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--) 
    {
        int n;
        cin>>n;
        for(int i=1;i<=n;i++) {
            ar[i].clear();
        }
        for(int i=1;i<n;i++) {
            int a,b;
            cin>>a>>b;
            ar[a].push_back(b);
            ar[b].push_back(a);
        }
        memset(vis,false,sizeof(vis));
        leaf[1]=dfs(1);
        int q;
        cin>>q;
        while(q--) {
            int a,b;
            cin>>a>>b;
            cout<<leaf[a]*leaf[b]<<endl;
        }
    }
    return 0;
}
