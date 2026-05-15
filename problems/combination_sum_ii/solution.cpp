class Solution {
private:
    void solve(vector<int>& arr, vector<int>& temp, vector<vector<int>>& ans, int ind, int target){
        if(target == 0){
            ans.push_back(temp);
            return;
        }

        for(int i = ind; i < arr.size(); i++){
            if(i > ind && arr[i] == arr[i-1]) continue;

            if(arr[i] > target) break;
            temp.push_back(arr[i]);
            solve(arr, temp, ans, i + 1, target - arr[i]);
            temp.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> temp;
        solve(candidates, temp, ans, 0, target);
        return ans;
    }
};