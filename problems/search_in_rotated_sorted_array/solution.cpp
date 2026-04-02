class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int s = 0;
        int e = n - 1;

        while(s < e){
            int mid = s + (e - s) / 2;
            if(nums[mid] > nums[e]){
                s = mid  + 1;
            }

            else{
                e = mid;
            }
        }
        if(nums[e] == target) return e;
        int pivot = e;
        
        if(nums[pivot] <= target && target <= nums[n -1]){
            s = pivot;
            e = n - 1;
            while( s < e){
                int mid = s + (e - s) / 2;
                if(nums[mid] == target){
                    return mid;
                }
                
                else if(nums[mid] < target){
                    s = mid + 1;
                }

                else{
                    e = mid;
                }
            }
            if(nums[s] == target) return s;
        }

        else{
            s = 0;
            e = pivot;
            while ( s < e){
                int mid = s + (e - s) / 2;
                if(nums[mid] == target){
                    return mid;
                }

                else if(nums[mid] < target){
                    s = mid + 1;
                }

                else{
                    e = mid;
                }
            }
            if(nums[s] == target) return s;

        }

        return -1;
    }
};