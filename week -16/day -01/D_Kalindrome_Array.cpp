#include<bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;
/* 
When I wrote this code ,
only Allah and I knew what I did.
   
Now... only Allah knows
*/

int32_t main () 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--) 
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++) {
            cin>>v[i];
        }
        bool flag = true;
        int first,second;
        for(int i=0;i<n/2;i++) {
            if(v[i]!=v[n-1-i]) {
                flag = false;
                first = v[i];
                second = v[n-i-1];
                break;
            }
        }
        // cout<<flag<<endl;
        if(flag) cout<<"YES"<<endl;
        else {
            // cout<<first<<" "<<second<<endl;
            vector<int> v1;
            for(int i=0;i<n;i++) {
                if(v[i]!=first) v1.push_back(v[i]);
            }
            bool flag1 = true;
            for(int i=0;i<v1.size()/2;i++) {
                if(v1[i]!=v1[v1.size()-1-i]) {
                    flag1 = false;
                    break;
                }
            }
            if(flag1) cout<<"YES"<<endl;
            else {
                vector<int> v2;
                for(int i=0;i<n;i++) {
                    if(v[i]!=second) v2.push_back(v[i]);
                }
                bool flag2 = true;
                for(int i=0;i<v2.size()/2;i++) {
                    if(v2[i]!=v2[v2.size()-1-i]) {
                        flag2 = false;
                        break;
                    }
                }
                if(flag2) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}  
