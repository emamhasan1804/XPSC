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
        int n , sum = 0 ;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++) {
            cin>>v[i];
            sum += v[i];
        }
        sort(v.rbegin(),v.rend());
        queue<int> q;
        for(int i:v) q.push(i);
        priority_queue<int,vector<int>> pq;
        pq.push(sum);
        while(!pq.empty()) {
            int temp = pq.top();
            pq.pop();
            if(q.front()>temp) break;
            if(temp==q.front()) {
                q.pop();
            }
            else {
                int x = temp/2, y=temp-x;
                pq.push(y);
                pq.push(x);
            }
        }
        if(q.empty()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
