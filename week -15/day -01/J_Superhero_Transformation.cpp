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

bool vou(char c) {
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u') return true;
    return false;
}

int32_t main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string a,b;
    cin>>a>>b;
    if(a.size()!=b.size()) {
        cout<<"No"<<endl;
        return 0;
    }
    bool flag = true;
    for(int i=0;i<a.size();i++) {
        if(vou(a[i]) && !vou(b[i])) { 
            flag = false;
            break;
        }
        if(!vou(a[i]) && vou(b[i])) { 
            flag = false;
            break;
        }
    }
    if(flag) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0; 
}
