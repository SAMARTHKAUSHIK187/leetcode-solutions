class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        long long sum = 0;
        long long currentF = 0;
        long long n = nums.size();
        
        
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            currentF += (long long)i * nums[i];
        }
        
        long long maxF = currentF;
        
        for (int i = n - 1; i >= 1; i--) {
            currentF = currentF + sum - (n * nums[i]);
            maxF = max(maxF, currentF);
        }
        
        return maxF;
    }
};