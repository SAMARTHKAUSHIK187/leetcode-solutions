class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        unordered_map<int, int> count;
        for(int num:nums){
            count[num]++;
        }

        for(int i = 0; i < n; i++){
            int cnt = 0;
            for(int j = 0; j < nums[i]; j++){
                if(count[j] > 0){
                    cnt += count[j];
                }
            }
            ans[i] = cnt;
        }

        return ans;
    }
};