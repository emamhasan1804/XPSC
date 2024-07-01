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
        int x,y,k;
        cin>>x>>y>>k;
        while(k>0) {
            if(x==1) {
                int baki = k%(y-1);
                x+=baki;
                break;
            }
            int c = (((x/y)+1)*y)-x; // from y divides x+c 
            if(c>k) {
                x+=k;
                break;
            }
            else {
                x+=c;
                k-=c;
                while(x%y==0) x/=y;
            }
        }
        cout<<x<<endl;
    }
    return 0;
}
