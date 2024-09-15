#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; // for set
// template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>; // for multiset
#define int long long
#define float double
#define endl '\n'


int32_t main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int cs =1;
    int t_c;cin>>t_c;while(t_c--) 
    {
        int n,t,q;
        cin>>n>>t>>q;
        pbds<int> p;
        for(int i=0;i<t;i++) {
            int vl;
            cin>>vl;
            p.insert(vl);
        }
        while(q--) {
            int st;
            cin>>st;
            int choto = p.order_of_key(st);
            if(choto==0) {
                cout<<st-1+(*p.find_by_order(0)-st)<<endl;
            }
            else if (choto==t) {
                cout<<n-st+(st-*p.find_by_order(t-1))<<endl;
            }
            // else cout<<'-'<<endl;
            else {
                    int d1 = st-(*p.find_by_order(choto-1)), d2 = *p.find_by_order(choto)-st;
                // auto arek = p.find_by_order(ax-1);
                //     int d1 = (st-*arek),d2=(*it-st);
                    if(d1<d2) swap(d1,d2);
                    // cout<<d1<<" "<<d2<<endl;
                    int cnt = 0;
                    if(d1%2==d2%2) {
                        cout<<d2+((d1-d2)/2)<<endl;
                    }
                    else cout<<d2+((d1-d2)/2)<<endl;
            }
            // else {
            //     int ax = p.order_of_key(st);
            //     if(ax==0) {
            //         int x = st-1+(*it-st);
            //         cout<<x<<endl;
            //         continue;
            //     }
            //     else {
            //         auto arek = p.find_by_order(ax-1);
            //         int d1 = (st-*arek),d2=(*it-st);
            //         if(d1<d2) swap(d1,d2);
            //         // cout<<d1<<" "<<d2<<endl;
            //         int cnt = 0;
            //         if(d1%2==d2%2) {
            //             cout<<d2+((d1-d2)/2)<<endl;
            //         }
            //         else cout<<d2+((d1-d2)/2)<<endl;
            //     }
            // }




            // auto it = lower_bound(s.begin(),s.end(),st);
            // if(it==s.end()) {
            //     auto left = it;
            //     left--;
            //     int x = n-st+ (st-*left);
            //     cout<<x<<endl;
            // }
            
        }
    }
    return 0;
}
