#include<bits/stdc++.h>
using namespace std;

int main () 
{
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int mn=INT_MIN;
        int mx=INT_MAX;
        vector<int> v;

        while(n--) {
            int c;
            cin>>c;
            if(c==1) {
                int x;cin>>x;
                if(x>mn) mn=x;
            }
            else if(c==2) {
                int x;cin>>x;
                if(x<mx) mx=x;
            }
            else if(c==3) {
                int x;cin>>x;
                v.push_back(x);
            }
        }
        if(mn>mx) cout<<0<<endl;
        else {
            int sz=v.size();
            for(int k:v) {
                if(k<mn || k>mx) {
                    sz--;
                }
            }
            long long int ans= mx-mn+1-sz;
            cout<<ans<<endl;
        }
    }
    return 0;
}
