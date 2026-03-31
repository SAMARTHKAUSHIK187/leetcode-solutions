class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> mpp(nums1.begin(), nums1.end());
        set<int> result;

        for(int num : nums2){
            if(mpp.count(num)){
                result.insert(num);
            }
        }

        return vector<int>(result.begin(), result.end());
    }
};