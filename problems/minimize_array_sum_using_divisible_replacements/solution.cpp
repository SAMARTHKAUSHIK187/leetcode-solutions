class Solution {
public:
    long long minArraySum(vector<int>& nums) {
        unordered_map<int, int> mpp;
        for(auto &x : nums) mpp[x]++;
        
        int n = nums.size();
        vector<int> larger_fact;
        for(auto &x: nums){
            for(int i = 1; i <= sqrt(x); i++){
                if(x % i) continue;
                if(mpp[i]){
                    x = i;
                    break;
                }
                larger_fact.push_back(x / i);
                }
            while(!larger_fact.empty()){
                    int y = larger_fact.back();
                    larger_fact.pop_back();
                    if(mpp[y]){
                        x = min(x, y);
                        break;
                    }
            }
        }

        long long sum = 0;
        for(auto& x : nums) sum += x;
        return sum;
    }
};