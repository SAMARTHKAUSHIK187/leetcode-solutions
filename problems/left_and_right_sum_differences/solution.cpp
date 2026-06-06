class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> leftSum(n, 0);
        vector<int> rightSum(n, 0);
        vector<int> ans(n, 0);
        for(int i = 0; i < n; i++){
            if(i == 0){
                leftSum[i] = nums[i];
                rightSum[n-1-i] = nums[n-1-i];
            }else{
                leftSum[i] = leftSum[i-1] + nums[i];
                rightSum[n-1-i] = rightSum[(n - 1) - i + 1] + nums[n-1-i];
            }
        }
        for(int i = 0; i < n; i++){
            ans[i] = abs(leftSum[i] - rightSum[i]);
        }
        return ans;
    }
};