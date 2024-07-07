class Solution {
public:
    bool ok(string s,int l, int r) {
        while(l<=r) {
            if(s[l]!=s[r]) {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }

    void fun(vector<vector<string>> &ans,string s, vector<string> v, int ind) {
        if(ind==s.size()) {
            ans.push_back(v);
            return;
        }
        for(int i=ind;i<s.size();i++) {
            if(ok(s,ind,i)) {
                v.push_back(s.substr(ind,i-ind+1));
                fun(ans,s,v,i+1);
                v.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> v;
        fun(ans,s,v,0);
        return ans;
    }
};
