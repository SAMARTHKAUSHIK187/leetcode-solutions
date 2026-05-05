class Solution {
private:
    void transpose(vector<vector<int>>& mat, int r, int c){
        for(int i = 0; i < r; i++){
            for(int j = i + 1; j < c; j++){
                swap(mat[i][j], mat[j][i]);
            }
        }
    }

    void reverseRows(vector<vector<int>>& mat, int r, int c){
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c/2; j++){
                swap(mat[i][j], mat[i][c - 1 - j]);
            }
        }
    }
    void rotateImage(vector<vector<int>>& mat){
        int n = mat.size();
        transpose(mat, n, n);
        reverseRows(mat, n, n);
    }

    bool isEqual(vector<vector<int>>& mat, vector<vector<int>>& target){
        int n = mat.size();
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(mat[i][j] != target[i][j]) return false;
            }
        }
        return true;
    }
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        for(int i = 0; i < 4; i++){
            rotateImage(target);
            if(isEqual(mat, target)) return true;
        }
        return false;   
    }
};