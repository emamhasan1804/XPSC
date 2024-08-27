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

bool cmp(const tuple<int,int,int> a , const tuple<int,int,int> b) {
    if(get<0>(a)==get<0>(b)) return get<1>(a)>get<1>(b);
    else return get<0>(a)<get<0>(b);
}

int32_t main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<tuple<int,int,int>> v(n);
    for(int i=0;i<n;i++) {
        int a,b;
        cin>>a>>b;
        v[i] = make_tuple(a,b,i+1);
    }
    sort(v.begin(),v.end(),cmp);
    int last = get<1>(v.front());
    int last_ind = get<2>(v.front());
    bool flag = false;
    for(int i=1;i<n;i++) {
        int x = get<1>(v[i]);
        if(x<=last) {
            cout<<get<2>(v[i])<<" "<<last_ind<<endl;
            flag = true;
            break;
        }
        if(x>last) {
            last = x;
            last_ind = get<2>(v[i]);
        }
    }
    if(!flag) cout<<-1<<" "<<-1<<endl;
    return 0;
}
