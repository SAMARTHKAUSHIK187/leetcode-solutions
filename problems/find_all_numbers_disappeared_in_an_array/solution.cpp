class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int, int> mpp;
        for(int num: nums){
            mpp[num]++;
        }

        int n = nums.size();
        for(int i = 1; i <= n; i++){
            if(mpp[i] == 0){
                ans.push_back(i);
            }
        }

        return ans;
    }
};