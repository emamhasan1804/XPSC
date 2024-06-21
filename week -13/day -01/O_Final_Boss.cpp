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
    bool operator() (tuple<int,int,int> a,tuple<int,int,int>b)  {  // obossoi operator() hote hobe
        if(get<1>(a) > get<1>(b)) return true;    // true mane change koro
        else if(get<1>(a) < get<1>(b)) return false;                  // false mane thik ase change korte hobe na
        else if(get<0>(a) > get<0>(b)) return false;
        else return true;
    }
};
int32_t main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--) 
    {
        int h,n;
        cin>>h>>n;
        vector<pair<int,int>> v(n);
        int sum = 0;
        for(int i=0;i<n;i++) {
            cin>>v[i].first;
            sum += v[i].first;
        }
        for(int i=0;i<n;i++) {
            cin>>v[i].second;
        }
        if(sum>=h) cout<<1<<endl;
        else {
            // cout<<"-"<<endl;
            priority_queue<tuple<int,int,int>,vector<tuple<int,int,int>>,compare> q;
            for(int i=0;i<n;i++) {
                q.push({v[i].first,v[i].second,v[i].second});
            }
            int d=1;
            while(sum<h) {
                auto it = q.top();
                sum += get<0>(it);
                // cout<<sum<<"-";
                d = get<1>(it);
                // cout<<d<<"  ";
                q.pop();
                q.push({get<0>(it),get<1>(it)+get<2>(it),get<2>(it)});
            }
            // cout<<endl;
            cout<<d+1<<endl;
        }
    }
    return 0;
}
