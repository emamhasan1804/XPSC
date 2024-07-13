class Solution {
public:

int ar[9][9];
int cnt;
vector<vector<string>> ans;
void fun(int n,int ind , vector<pair<int,int>> &v ) {
    if(n==ind) {
        if(cnt!=n) return;
        vector<string > kk;
        for(int i=0;i<n;i++) {
            string s;
            for(int j=0;j<n;j++) {
                if(ar[i][j]==0) s+='.';
                else s+='Q';
            }
            kk.push_back(s);
        }
        ans.push_back(kk);
        return;
    }

    for(int i=0;i<n;i++) {
        bool flag = true;
        for(auto it:v) {
            if(it.first==i && it.second==ind) {
                flag = false;
                break;
            }
        }
        if(flag==false) continue;
        for(int j=ind+1;j<n;j++) v.push_back({i,j});
        int x = i-1, y = ind+1;
        while(x>=0 && y <n) {
            v.push_back({x,y});
            x--;y++;
        }
        x=i+1,y=ind+1;
        while(x<n &&  y<n) {
            v.push_back({x,y});
            x++;y++;
        }
        
        cnt++;
        ar[i][ind]=1;
        fun(n,ind+1,v);
        cnt--;
        ar[i][ind]=0;

        for(int j=ind+1;j<n;j++) v.pop_back();
        x = i-1;
        y = ind+1;
        while(x>=0 && y <n) {
            v.pop_back();
            x--;y++;
        }
        x=i+1,y=ind+1;
        while(x<n &&  y<n) {
            v.pop_back();
            x++;y++;
        }
    }
}

    vector<vector<string>> solveNQueens(int n) {
        cnt =0;
        vector<pair<int,int>> v;
        fun(n,0,v);
        return ans;
    }
};
