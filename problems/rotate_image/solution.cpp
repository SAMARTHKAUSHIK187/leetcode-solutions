class Solution {

private:
    void transpose(vector<vector<int>>& matrix, int r, int c){
        for(int i = 0; i < r; i++){
            for(int j = i + 1; j < c; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }

    void reverseRows(vector<vector<int>>& matrix, int r, int c){
        for(int i = 0; i < r; i++){

            int re = c - 1 ;
            int j = 0;
          
            while(re > j){
                swap(matrix[i][j++], matrix[i][re--]);
            }
           }
        }
public:
    void rotate(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();

        transpose(matrix, r, c);

        reverseRows(matrix, r, c);
    }
};