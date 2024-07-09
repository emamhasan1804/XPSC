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
    int n,k;
    cin>>n>>k;
    int l=0,r=n,ans=-1,mid;
    while(l<=r) {
        int temp = n;
        mid = (l+r)/2;
        temp-=mid;
        temp = (temp*(temp+1))/2;
        temp-=mid;
        if(temp==k) {
            ans = mid;
            break;
        }
        else if(temp>k) l=mid+1;
        else if(temp<k) r=mid-1;
    }
    cout<<ans<<endl;
    return 0;
}

// n=1 hole k=0 hote parbe na
