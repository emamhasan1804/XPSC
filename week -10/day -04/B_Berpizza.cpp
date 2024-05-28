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
    bool operator() (pair<int,int> a, pair<int,int> b) {
        if(a.first<b.first) return true;
        else if(a.first>b.first) return false;
        else if(a.second<b.second) return false;
        return true;
    }
};

int32_t main() 
{
    int q;
    cin>>q;
    map<pair<int,int>,int> vis;
    set<pair<int,int>> s;
    priority_queue<pair<int,int> ,vector<pair<int,int>>,compare> three;
    int i = 1;
    while(q--) {
        int vl;
        cin>>vl;
        if(vl==1) {
            int x;
            cin>>x;
            three.push(make_pair(x,i));
            s.insert(make_pair(i,x));
            i++;
        }
        else if(vl==2) {
            cout<<s.begin()->first<<" ";
            vis[{s.begin()->second,s.begin()->first}] = true;
            if(three.top().first==s.begin()->first) three.pop();
            s.erase(s.begin());
        }
        else {
            if(vis[three.top()]==true) {
                while(vis[three.top()]==true) {
                    three.pop();
                }
            }
            cout<<three.top().second<<" ";
            s.erase({three.top().second,three.top().first});
            three.pop();
        }
    }
    return 0;
}
