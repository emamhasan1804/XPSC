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
        int n,k;
        cin>>n>>k;
        vector<int> v(n+1);
        int min = 0;
        for(int i=1;i<=n;i++) {
            cin>>v[i];
            if(v[i]<0) {
                min++;
            }
        }
        sort(v.begin(),v.end());
        vector<int> minus(min);
        int l = min-1;
        for(int i=0;i<min;i++) {
            minus[l]=-v[i];
            l--;
        }
        int cnt = 0;
        if(minus.size()>0) {
            int a=v.back(),b=minus.back();
            if(a>b) {
                cnt+=a;
                cnt+=2*b;
            }
            else {
                cnt+=b;
                cnt+=2*a;
            }
            for(int i=0;i<k;i++) {
                if(v.size()==0) break;
                else v.pop_back();
            }
            for(int i=0;i<k;i++) {
                if(minus.size()==0) break;
                else minus.pop_back();
            }
            while(v.size()>0) {
                if(v.back()<0) break;
                cnt += 2*v.back();
                for(int i=1;i<=k;i++) {
                    if(v.size()==0) break;
                    else v.pop_back();
                }
            }
            while(minus.size()>0) {
                cnt += 2*minus.back();
                for(int i=1;i<=k;i++) {
                    if(minus.size()==0) break;
                    else minus.pop_back();
                }
            }
            cout<<cnt<<endl;
        }
        else {
            int cnt = v.back();
            for(int i=1;i<=k;i++){
                if(v.size()==0) break;
                v.pop_back();
            }
            while(v.size()>0) {
                cnt += 2*v.back();
                for(int i=1;i<=k;i++) {
                    if(v.size()==0) break;
                    else v.pop_back();
                }
            }
            cout<<cnt<<endl;
        }
    }
    return 0;
}
