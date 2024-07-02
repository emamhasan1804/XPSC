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
        int n,f,s;
        cin>>n>>f>>s;
        vector<int> v(n);
        for(int i=0;i<n;i++) {
            cin>>v[i];
        }
        int l=0,r=0,sum=0,cnt=0;
        while(r<n) {
            sum += v[r];
            if(sum>=f && sum<=s) {
                cnt++;
                sum = 0;
                l=r+1;
            }
            else if(sum>s) {
                while(sum>s) {
                    sum -= v[l];
                    l++;
                }
                if(sum>=f && sum<=s) {
                    cnt++;
                    sum = 0;
                    l=r+1;
                }
            }
            r++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
