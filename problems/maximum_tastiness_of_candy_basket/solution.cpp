class Solution {
private:
    bool isPoss(int mid, vector<int>& arr, int k){
        int temp = arr[0], i = 1, count = 1;
        while(count < k && i < arr.size()){
            if(arr[i] - temp >= mid){
                temp = arr[i];
                count++;
            }
            i++;
        }
        return (count == k);
    }
public:
    int maximumTastiness(vector<int>& price, int k) {
        sort(price.begin(), price.end());
        int i = 0, j = 1e9;
        while(i < j){
            int mid = i + (j - i) / 2;
            if(isPoss(mid, price, k)){
                i = mid + 1;
            }else{
                j = mid;
            }
        }

        return i-1;
    }
};