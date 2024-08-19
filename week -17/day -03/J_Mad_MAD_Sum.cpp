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
        int n,sum=0;
        cin>>n;
        vector<int> v(n),mad(n);
        for(int i=0;i<n;i++) {
            cin>>v[i];
            sum += v[i];
        }
        int mx = 0;
        map<int,int> mp;
        for(int i=0;i<n;i++) {
            mp[v[i]]++;
            if(mp[v[i]]>=2) {
                mx = max(mx,v[i]);
            }
            mad[i]=mx;
            sum += mx;
        }
        mx = 0;
        for(int i=0;i<n;i++) {
            int l = i,cnt=0;
            while(l<n && mad[l]==mad[i]) {
                cnt++;
                l++;
            }
            l--;
            if(cnt==1) {
                mad[i]=mx;
                continue;
            }
            mx = mad[i];
            i=l;
        }
        int temp = 0;
        for(int i:mad) {
            temp += i;
        }
        for(int i=n-1;i>=0;i--) {
            if(mad[i]==0) break;
            temp -= mad[i];
            sum += temp;
        }
        cout<<sum<<endl;
    }
    return 0;
}
