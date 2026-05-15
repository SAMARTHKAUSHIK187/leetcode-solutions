class Solution {
private:
    void solve(int ind, vector<int>&arr, set<vector<int>>& ans, vector<int>& temp){
        if(ind == arr.size()){
            ans.insert(temp);
            return ;
        }

        temp.push_back(arr[ind]);
        solve(ind+1, arr, ans, temp);
        temp.pop_back();
        solve(ind+1, arr, ans, temp);
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<vector<int>>ans;
        vector<int> temp;
        vector<vector<int>> ans0;
        solve(0, nums, ans, temp);
        int j = 0;
        for(auto const& vec : ans){
            ans0.push_back(vec);
        }

        return ans0;
    }
};