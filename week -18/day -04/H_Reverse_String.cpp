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
        string s,b;
        cin>>s>>b;
        int n = s.size(),m=b.size();
        bool flag = false;
        for(int i=0;i<n;i++) {
            if(s[i]==b.front() && m==1) {
                flag = true;
                break;
            }
            if(s[i]==b.front()) {
                int k = m-1;
                for(int j=0;j<=k;j++) {
                    string temp;temp+= b.front();
                    if(i+j>=n) continue;
                    if(i+j+j<k) continue;
                    temp += s.substr(i+1,j);
                    string ase = s.substr(0,i+j);
                    reverse(ase.begin(),ase.end());
                    temp += ase.substr(0,k-j);
                    if(temp==b) {
                        flag = true;
                        break;
                    }
                }
            }
            if(flag) break;
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
