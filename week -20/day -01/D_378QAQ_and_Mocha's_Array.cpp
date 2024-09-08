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
        sort(v.begin(),v.end());
        int k = v.front();
        vector<bool> flag(n,false);
        flag[0]=true;
        int ind = -1;
        for(int i=1;i<n;i++) {
            if(v[i]%k==0) {
                flag[i] = true;
            }
            else if(v[i]%k!=0 && ind==-1) {
                ind = i;
            }
        }
        if(ind!=-1) {
            flag[ind]=true;
            for(int i=ind+1;i<n;i++) {
                if(flag[i]==false && v[i]%v[ind]==0) {
                    flag[i] = true;
                }
            }
        }
        bool flagg = true;
        for(bool i:flag) {
            if(i==false) {
                flagg = false;
                break;
            }
        }
        if(flagg) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
