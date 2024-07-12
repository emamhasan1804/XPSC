class Solution {
public:
    // map<vector<int>,int> mp;
    void fun(int n,int sum,int k,vector<vector<int>> &ans,vector<int> v,vector<int> &a) {
        if(sum>k) return;
        if(sum==k) {
            ans.push_back(a);
            // mp[a]++;
        }
        if(n==v.size()) return;
        for(int i=n;i<v.size();i++) {
            sum += v[i];
            a.push_back(v[i]);
            fun(i+1,sum,k,ans,v,a);
            sum -= v[i];
            a.pop_back();
            int x = i+1;
            while(x<v.size() && v[x]==v[i]) x++;
            i = x-1;
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& v, int k) {
        sort(v.begin(),v.end());
        vector<vector<int>> ans;
        vector<int> a;
        fun(0,0,k,ans,v,a);
        return ans;
    }
};
