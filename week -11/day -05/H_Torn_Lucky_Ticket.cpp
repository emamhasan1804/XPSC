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

bool cmp(const string a,const string b) {
    return a.size()<b.size();
}

int32_t main() 
{
    int n;
    cin>>n;
    vector<string> v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }
    sort(v.begin(),v.end(),cmp);
    // for(string s:v) cout<<s<<" ";
    // cout<<endl;
    map<pair<int,int>,int> mp; // length, sum
    int ans = 0;
    for(string s:v) {
        int sz = s.size();
        // cout<<sz<<endl;
        for(int i=sz+1;i<=10;i++) {
            if(i%2==1) continue;
            int mid = i/2;
            int leftsum = 0;
            for(int j=0;j<mid;j++) {
                leftsum += (s[j]-'0');
            }
            int rightsum = 0;
            for(int j=mid;j<s.size();j++) {
                rightsum+= (s[j]-'0');
            }
            int lagbe = leftsum - rightsum;
            if(lagbe>=0)ans += mp[{i-sz,lagbe}];
        }
        reverse(s.begin(),s.end());
        for(int i=sz+1;i<=10;i++) {
            if(i%2==1) continue;
            int mid = i/2;
            int leftsum = 0;
            for(int j=0;j<mid;j++) {
                leftsum += (s[j]-'0');
            }
            int rightsum = 0;
            for(int j=mid;j<s.size();j++) {
                rightsum+= (s[j]-'0');
            }
            int lagbe = leftsum - rightsum;
            if(lagbe>=0)ans += mp[{i-sz,lagbe}];
        }
        int sum = 0;
        for(int i=0;i<sz;i++) {
            sum += (s[i]-'0');
        }
        mp[{sz,sum}]++;
    }
    cout<<ans+n<<endl;
    return 0;
}
