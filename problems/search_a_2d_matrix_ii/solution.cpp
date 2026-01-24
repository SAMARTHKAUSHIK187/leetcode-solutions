class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = matrix.size();
        int c = matrix[0].size();

        int row = 0;
        int col = c -1;
        while(row < r && col >= 0){
            int element = matrix[row][col];

            if(element == target){
                return 1;
            }

            else if(element > target){
                col--;
            }

            else{
                row++;
            }
        }

        return 0;
    }
};