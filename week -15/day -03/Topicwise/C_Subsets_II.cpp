class Solution {
public:
    map<vector<int>,int> mp;
    void fun(int init, vector<vector<int>> &ans, vector<int> &v,vector<int> nums) {
        if(init==nums.size()) return;
        for(int i=init;i<nums.size();i++) {
            v.push_back(nums[i]);
            if(mp[v]==0) {
                ans.push_back(v);
                mp[v]++;
            }
            fun(i+1,ans,v,nums);
            v.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        vector<int> v;
        ans.push_back(v);
        fun(0,ans,v,nums);
        return ans;
    }
};
