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
        int n,k;
        cin>>n>>k;
        int oc=0,ec=0;
        for(int i=0;i<n;i++) {
            int vl;cin>>vl;
            if(vl%2==0) ec++;
            else oc++;
        }
        if(k%2==1) {
            if(oc==0) {
                cout<<"No"<<endl;
                continue;
            }
            k--;
            oc--;
            if(oc%2) oc--;
            if(oc+ec>=k) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
        else {
            if(oc==0) {
                cout<<"No"<<endl;
                continue;
            }
            oc--;
            k--;
            if(oc%2) oc--;
            if(oc+ec>=k && ec>=1) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
    return 0;
}
