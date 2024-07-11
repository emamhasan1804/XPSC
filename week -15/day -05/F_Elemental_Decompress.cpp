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
        vector< pair<int,int> > v(n);
        for(int i=0;i<n;i++) {
            int vl;cin>>vl;v[i]={vl,i};
        }
        sort(v.begin(),v.end());
        vector<int> a(n),b(n);
        map<int,int> mpa,mpb;
        bool flag = true;
        for(int i=0;i<n;i++) {
            int x = v[i].first;
            if(mpa[x]==0) {
                a[i]=x;
                mpa[x]++;
            }
            else if(mpb[x]==0) {
                b[i]=x;
                mpb[x]++;
            }
            else {
                flag = false;
                break;
            }
        }
        if(!flag) cout<<"NO"<<endl;
        else {
            queue<int> qa,qb;
            for(int i=1;i<=n;i++) {
                if(mpa[i]==0) qa.push(i);
                if(mpb[i]==0) qb.push(i);
            }
            for(int i=0;i<n;i++) {
                if(a[i]==0) {
                    a[i]=qa.front();
                    qa.pop();
                }
                if(b[i]==0) {
                    b[i]=qb.front();
                    qb.pop();
                }
            }
            for(int i=0;i<n;i++) {
                if(max(a[i],b[i])!=v[i].first) {
                    flag = false;
                    break;
                }
            }
            if(!flag) cout<<"NO"<<endl;
            else {
                cout<<"YES"<<endl;
                vector<int> ans(n);
                for(int i=0;i<n;i++) {
                    int ind = v[i].second;
                    ans[ind]=i;
                }
                for(int i:ans) {
                    cout<<a[i]<<" ";
                }
                cout<<endl;
                for(int i:ans) {
                    cout<<b[i]<<" ";
                }
                cout<<endl;
            }
        }
    }
    return 0;
}
