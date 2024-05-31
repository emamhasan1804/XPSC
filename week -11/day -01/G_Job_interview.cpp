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
        int n,m;
        cin>>n>>m;
        int N=n+m+1;
        vector<pair<int,int>> v(N);
        for(int i=0;i<N;i++) cin>>v[i].first;
        for(int i=0;i<N;i++) cin>>v[i].second;
        vector<pair<int,int>> prefix(N);
        prefix[0]=v[0];
        for(int i=1;i<N;i++) {
            prefix[i].first=prefix[i-1].first+v[i].first;
            prefix[i].second=prefix[i-1].second+v[i].second;
        }
        vector<int> prog(N),test(N);
        int sum1 = 0,sum2=0;
        for(int i=0;i<N;i++) {
            if(v[i].first>v[i].second) {
                prog[i] = sum1+1;
                sum1=prog[i];
                test[i] = sum2;
            }
            else {
                test[i] = sum2+1;
                sum2=test[i];
                prog[i]=sum1;
            }
        }
        vector<int> strong(N);
        strong[0]=max(v[0].first,v[0].second);
        for(int i=1;i<N;i++) {
            strong[i]=strong[i-1]+max(v[i].first,v[i].second);
        }
        if(n==0 && m==0) {
            cout<<0<<endl;
            continue;
        }
        for(int i=0;i<N;i++) {
            if(n==0) {
                cout<<prefix[N-1].second-v[i].second<<" ";
            }
            else if(m==0) {
                cout<<prefix[N-1].first-v[i].first<<" ";
            }
            else {
                // ager bareer code eikhane hobe , binary search + baki hisab
                int programmer = lower_bound(prog.begin(),prog.end(),n) - prog.begin();
                if(i<=programmer && (v[i].first>v[i].second)) {
                    programmer = lower_bound(prog.begin(),prog.end(),n+1) - prog.begin();
                }
                int tester = lower_bound(test.begin(),test.end(),m) - test.begin();
                if(i<=tester && (v[i].second>v[i].first)) {
                    tester = lower_bound(test.begin(),test.end(),m+1) - test.begin();
                }
                // cout<<programmer<<" "<<tester<<endl;
                if(programmer<tester) {
                    int sum = strong[programmer];
                    sum += prefix[N-1].second;
                    sum -= prefix[programmer].second;
                    if(i<=programmer ) sum -= max(v[i].first,v[i].second);
                    else sum -= v[i].second;
                    cout<<sum<<" ";
                }
                else if(tester<programmer) {
                    int sum = strong[tester];
                    sum += prefix[N-1].first;
                    sum -= prefix[tester].first;
                    if(i<=tester) sum -= max(v[i].first,v[i].second);
                    else sum -= v[i].first;
                    cout<<sum<<" ";
                }
                // break;
            }
        }
        cout<<endl;
    }
    return 0;
}
