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

class compare {
public:
    bool operator() (pair<int,int> a,pair<int,int>b)  {  // obossoi operator() hote hobe
        if(a.second>b.second) return true;    // true mane change koro
        else if(a.second<b.second) return false;                  // false mane thik ase change korte hobe na
        else if(a.first<b.first) return true;
        else return false;
    }
};

int32_t main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--) 
    {
        int n,c,d;
        cin>>n>>c>>d;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        sort(v.rbegin(),v.rend());
        int sum = 0;
        for(int i=0;i<n&&i<d;i++) {
            sum +=v[i];
            if(sum>=c) break;
        }
        if(sum>=c) cout<<"Infinity"<<endl;
        else if(v.front()*d<c) cout<<"Impossible"<<endl;
        else {
            int l=0,r=d,ans=-1,mid;
            auto ok = [&] (int md) {
                int sm = 0;
                int ind = 0;
                for(int i=0;i<d;i++) {
                    if(ind<n)sm += v[ind];
                    ind ++ ;
                    if(ind>md) ind=0;
                }
                // cout<<sm<<" , ";
                if(sm>=c) return true;
                return false;
            };
            while(l<=r) {
                mid = (l+r)/2;
                // cout<<mid<<" - ";
                if(ok(mid)) {
                    ans = mid;
                    l = mid+1;
                }
                else r = mid-1;
            }
            cout<<ans<<endl;
            // cout<<endl;
        }
    }
    return 0;
}
