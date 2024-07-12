class Solution {
public:

    void fun(int n,int sum,int k,vector<int> &v,vector<int> &a,vector<vector<int>> &ans) {
        if(sum>k || n==v.size()) return;
        if(sum==k) {
            ans.push_back(a);
            return;
        }
        for(int i=n;i<v.size();i++) {
            sum += v[i];
            a.push_back(v[i]);
            fun(i,sum,k,v,a,ans);
            sum -= v[i];
            a.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& v, int k) {
        sort(v.begin(),v.end());
        vector<vector<int>> ans;
        vector<int> a;
        fun(0,0,k,v,a,ans);
        return ans;
    }
};
