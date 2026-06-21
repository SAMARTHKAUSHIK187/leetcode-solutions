class Solution {
public:
    bool isValid(long long sum, int x){
        long long temp = sum;
        if(temp % 10 != x) return false;
        while(temp >= 10 ) temp /= 10;
        return temp == x;
    }
    int countValidSubarrays(vector<int>& nums, int x) {
        int n = nums.size();
        int sum = nums[0];
        int l = 0, r = 0;
        int cnt = 0;
        // int sum = nums[l]
        for(int i = 0; i < n; i++){
            long long sum = 0;
            // if(nums[i] < 10) cnt++;
            for(int j = i; j < n; j++){
                sum += nums[j];
                if(isValid(sum, x)){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};