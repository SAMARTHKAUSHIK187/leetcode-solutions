class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map <int, int> mpp;
        int n = nums.size();
        vector<int> ans;
        set<int> values;

        for(int num : nums){
            mpp[num]++;
            if(mpp[num] > n/3){
                values.insert(num);
            }
        }

        ans.insert(ans.end(), values.begin(), values.end());
        return ans;
    }
};