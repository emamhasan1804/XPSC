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


int32_t main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--) 
    {
        int n;
        cin>>n;
        vector<vector<int>> vc(3);
        int sum = 0;
        for(int i=0;i<n;i++) {
            int vl;
            cin>>vl;
            sum += vl;
            vc[0].push_back(vl);
        }
        for(int i=0;i<n;i++) {
            int vl;
            cin>>vl;
            vc[1].push_back(vl);
        }
        for(int i=0;i<n;i++) {
            int vl;
            cin>>vl;
            vc[2].push_back(vl);
        }
        int need = (sum+2)/3; // ceil 
        vector<vector<int>> v = {{0,1,2},{0,2,1},{1,0,2},{1,2,0},{2,0,1},{2,1,0}};
        bool flag = false;
        auto ok = [&] (vector<int> it) {
            int a=0,b=0,c=0,first =-1,second=-1,third=-1;
            for(int i=0;i<n;i++) {
                if(a<need) {
                    a+=vc[it[0]][i];
                }
                else if(b<need) {
                    if(first==-1) first = i;
                    b+= vc[it[1]][i];
                }
                else {
                    if(second==-1) second = i;
                    c+=vc[it[2]][i];
                }
            }
            if(a>=need && b>=need && c>=need) {
                third = n;
                flag = true;
                vector<pair<int,int>> vio(3);
                vio[it[0]] = {1,first};
                vio[it[1]] = {first+1,second};
                vio[it[2]] = {second+1,n};
                for(auto as:vio) cout<<as.first<<" "<<as.second<<" ";
                cout<<endl;
                return 1;
            }
            return 0;
        };
        for(auto it:v) {
            if(ok(it)) break;
        }
        if(!flag) cout<<-1<<endl;
    }
    return 0;
}
