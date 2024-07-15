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
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(s.front()!='9') {
            for(char c:s) {
                int temp = c-'0';
                cout<<9-temp;
            }
            cout<<endl;
        }
        else {
            reverse(s.begin(),s.end());
            stack<int> st;
            int hate_ase = 0;
            for(char c:s) {
                int temp = c-'0';
                temp += hate_ase;
                hate_ase = 0;
                int x = 1;
                if(x<temp) {
                    x+=10;
                    hate_ase=1;
                }
                st.push(x-temp);
            }
            while(!st.empty()) {
                cout<<st.top();
                st.pop();
            }
            cout<<endl;
        }
    }
    return 0;
}

/*
    111
     99
-----------
     12
*/
