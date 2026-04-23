class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        int n = nums.size();
        vector<long long> ans(n, 0);
        unordered_map<int, vector<int>> mpp;

        
        for (int i = 0; i < n; i++) {
            mpp[nums[i]].push_back(i);
        }

        
        for (auto& [val, indices] : mpp) {
            int k = indices.size();
            
            
            long long prefix_sum = 0;
            for (int i = 0; i < k; i++) {
                ans[indices[i]] += (long long)i * indices[i] - prefix_sum;
                prefix_sum += indices[i];
            }

            
            long long suffix_sum = 0;
            for (int i = k - 1; i >= 0; i--) {
                ans[indices[i]] += suffix_sum - (long long)(k - 1 - i) * indices[i];
                suffix_sum += indices[i];
            }
        }

        return ans;
    }
};