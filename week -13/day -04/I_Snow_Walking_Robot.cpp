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
        string s;
        cin>>s;
        int c1=0,c2=0,c3=0,c4=0;
        for(char i:s) {
            if(i=='L') c1++;
            else if(i=='R') c2++;
            else if(i=='U') c3++;
            else c4++;
        }
        int x = min(c1,c2),y=min(c3,c4);
        if(x==0 && y==0) cout<<0<<endl<<endl;
        else if(x==0) cout<<2<<endl<<"UD"<<endl;
        else if(y==0) cout<<2<<endl<<"LR"<<endl;
        else {
            cout<<2*(x+y)<<endl;
            for(int i=0;i<x;i++) {
                cout<<"L";
            }
            for(int i=0;i<y;i++) {
                cout<<"U";
            }
            for(int i=0;i<x;i++) {
                cout<<"R";
            }
            for(int i=0;i<y;i++) {
                cout<<"D";
            }
            cout<<endl;
        }
    }
    return 0;
}
