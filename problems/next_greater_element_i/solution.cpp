class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int i = 0; i < nums1.size();i++){
            int temp = nums1[i];
            bool found = false;
            for(int j = 0; j < nums2.size(); j++){
                if(temp == nums2[j]) found = true;
                if(found){
                    if(nums2[j] > temp){
                        ans.push_back(nums2[j]);
                        break;
                    }
                    if(j == nums2.size() - 1) found = false;
                }
            }
            if(!found) ans.push_back(-1);
        }

        return ans;
    }
};