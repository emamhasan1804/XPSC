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
        vector<int> v(n);
        deque<int> d;
        for(int i=0;i<n;i++) {
            cin>>v[i];
            d.push_back(v[i]);
        }
        sort(d.begin(),d.end());
        int l=0,r=n-1;
        int left = -1,right = -1;
        while(l<r) {
            if(left!=-1 && right!=-1) break;
            if(left==-1) {
                if(v[l]==d.front()) {
                    d.pop_front();
                    if(right!=-1) {
                        if(d.front()==v[right]) {
                            r--;
                            right=-1;
                            d.pop_front();
                        }
                    }
                    l++;
                }
                else if(v[l]==d.back()) {
                    d.pop_back();
                    if(right!=-1) {
                        if(d.back()==v[right]) {
                            d.pop_back();
                            r--;
                            right=-1;
                        }
                    }
                    l++;
                }
                else {
                    left = l;
                }
            }
            if(right==-1) {
                if(v[r]==d.front()) {
                    d.pop_front();
                    if(left!=-1) {
                        if(d.front()==v[left]) {
                            l++;
                            left=-1;
                            d.pop_front();
                        }
                    }
                    r--;
                }
                else if(v[r]==d.back()) {
                    d.pop_back();
                    if(left!=-1) {
                        if(d.back()==v[left]) {
                            l++;
                            left=-1;
                            d.pop_back();
                        }
                    }
                    r--;
                }
                else {
                    right=r;
                }
            }
        }
        if(left==-1 || right ==-1) cout<<-1<<endl;
        else cout<<left+1<<" "<<right+1<<endl;
    }
    return 0;
}
