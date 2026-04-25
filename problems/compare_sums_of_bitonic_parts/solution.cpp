class Solution {
public:
    int compareBitonicSums(vector<int>& nums) {
        int n = nums.size();
        int i = 0; 
        int j = n - 1;
        int mid = 0;
        while(i < j){
            mid = i + (j - i)/ 2;

            if(nums[mid] < nums[mid + 1]){
                i = mid + 1;
            }

            else{
                j = mid;
            }
        }

        int peak = i;
        long long fwdSum = 0;
        long long bckSum = 0;
        for(int k = 0; k <= peak; k++){
            fwdSum += nums[k];
        }
        for(int k = peak; k < n; k++) bckSum += nums[k];

        if(fwdSum == bckSum) return -1;
        if(fwdSum > bckSum) return 0;
        else return 1;
    }
};