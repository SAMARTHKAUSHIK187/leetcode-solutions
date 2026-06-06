class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int r = 0, l = 0;
        int maxLen = 0;
        map<int, int> mpp;
        while(r < fruits.size()){
            mpp[fruits[r]]++;
            if(mpp.size() > 2){
                mpp[fruits[l]]--;
                if(mpp[fruits[l]] == 0) mpp.erase(fruits[l]);
                l++;
            }
            else{
                maxLen = max(maxLen, r-l+1);
            }
            r++;
        }
        return maxLen;
    }
};