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
        int n;
        cin>>n>>s;
        int zc = 0, oc = 0;
        int cnt = n;
        vector<int> v;
        for(char c:s) {
            if(c=='1') {
                if(zc>0)v.push_back(zc);
                // cnt+=zc;
                oc++;
                zc=0;
            }
            else {
                if(oc>0)v.push_back(oc);
                // cnt+=oc;
                oc=0;
                zc++;
            }
        }
        if(zc!=0) v.push_back(zc);
        if(oc!=0) v.push_back(oc);
        int temp = 0;
        for(int i:v) {
            cnt+=temp;
            temp+=i;
        }
        cout<<cnt<<endl;
    }
    return 0;
}

//
