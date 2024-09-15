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
    int cs =1;
    int t_c;cin>>t_c;while(t_c--) 
    {
        int n;
        cin>>n;
        int x = 0;
        x = n%5;
        n/=5;
        vector<int> v(6);

        for(int i=1;i<=5;i++) {
            v[i]+=n;
        }
        char st =1;
        for(int i=0;i<x;i++) {
            v[st]++;
            st++;
        }
        for(int i=1;i<=5;i++) {
            for(int j=0;j<v[i];j++) {
                if(i==1) cout<<'a';
                if(i==2) cout<<'e';
                if(i==3) cout<<'i';
                if(i==4) cout<<'o';
                if(i==5) cout<<'u';
            }
        }
        cout<<endl;
    }
    return 0;
}
