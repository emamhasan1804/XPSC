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

string strlcm(string a) {
    int n = a.size();
    string lcma = a;
    for(int i=1;i<=sqrt(n);i++) {
        if(n%i) continue;
        string temp = a.substr(0,i),tempa=temp;
        for(int j=1;j<n/i;j++) {
            tempa += temp;
        }
        if(tempa==a) lcma = min (lcma,temp);
        if(n/i==i) continue;
        temp = a.substr(0,n/i);
        tempa=temp;
        for(int j=1;j<i;j++) {
            tempa += temp;
        }
        if(tempa==a) lcma = min (lcma,temp);
    } 
    return lcma;
}

int32_t main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--) 
    {
        string a,b;
        cin>>a>>b;
        if(strlcm(a)!=strlcm(b)) cout<<-1<<endl;
        else {
            string temp = strlcm(a);
            int cnt = lcm(a.size(),b.size())/temp.size();
            for(int i=0;i<cnt;i++) {
                cout<<temp;
            }
            cout<<endl;
        }
    }
    return 0;
}
