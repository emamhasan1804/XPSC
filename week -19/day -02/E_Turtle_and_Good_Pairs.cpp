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
    bool operator() (pair<char,int> a,pair<char,int> b)  {  // obossoi operator() hote hobe
        if(a.second<=b.second) return true;    // true mane change koro
        else return false;                  // false mane thik ase change korte hobe na
    }
};
 
int32_t main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--) 
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        map<char,int> mp;
        for(char c:s) {
            mp[c]++;
        }
        priority_queue<pair<char,int>,vector<pair<char,int>>,compare> q;
        for(auto it:mp) {
            q.push(it);
        }
        while(!q.empty()) {
            auto it = q.top();
            q.pop();
            cout<<it.first;
            if(!q.empty()) {
                auto a = q.top();
                q.pop();
                cout<<a.first;
                if(a.second>1) q.push({a.first,a.second-1});
            }
            if(it.second>1) q.push({it.first,it.second-1});
        }
        cout<<endl;
    }
    return 0;
}
