class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            if(nums[i] & 1) nums[i] = 1;
            else nums[i] = 0;
        }
        int currentSum = 0;
        int cnt = 0;
        mpp[currentSum]++;
        for(int i = 0; i < n; i++){
            currentSum += nums[i];
            int req = currentSum - k;
            if(mpp.find(req) != mpp.end()){
                cnt += mpp[req];
            }
            mpp[currentSum]++;
        }
        return cnt;
    }
};