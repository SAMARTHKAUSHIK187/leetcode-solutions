class Solution {
private:
    void transpose(vector<vector<int>>& matrix, int c, int r){
        for(int i = 0; i < r; i++){
            for(int j = i + 1; j < c; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }

    void reverseRows(vector<vector<int>>& matrix){
        int n = matrix.size();
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n/2; j++){
                swap(matrix[i][j], matrix[i][n - 1 - j]);
            }
        }
    }
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        transpose(matrix, n, n);
        reverseRows(matrix);        
    }
};