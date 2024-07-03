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
        int n,k;
        string s;
        cin>>n>>k>>s;
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++) {
            if(s[i]=='0') {
                int x = i;
                while(i<n && s[i]=='0') {
                    i++;
                }
                i--;
                int y = i;
                v.push_back({x,y});
            }
        }
        int cnt = 0;
        for(auto it:v) {
            if(it.first==0) {
                if(it.second==n-1) {
                    cnt++;
                    cnt += (it.second-it.first)/(k+1);
                }
                else {
                    int x = it.second-it.first+1;
                    x-=k;
                    if(x>0) {
                        cnt++;
                        x--;
                        if(x>0) {
                            cnt += x/(k+1);
                        }
                    }
                    
                }
            }
            else if(it.second==n-1) {
                int x = it.second-it.first+1;
                x-=k;
                if(x>0) {
                    cnt++;
                    x--;
                    if(x>0){
                        x/=(k+1);
                        cnt+=x; 
                    }
                }
                
            }
            else {
                int x = it.second-it.first+1;
                x-=k;
                x-=k;
                if(x>0) {
                    cnt++;
                    x--;
                    if(x>0) {
                        x/=(k+1);
                        cnt+=x;
                    }
                }
            }
        }
        cout<<cnt<<endl;
    }

    return 0;
}
