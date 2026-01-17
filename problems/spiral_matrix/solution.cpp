class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rowSt = 0;
        int colSt = 0;

        int row = matrix.size();
        int col = matrix[0].size();

        int rowEnd = row-1 ;
        int colEnd = col-1 ;

        vector<int> ans;

        while( rowSt <= rowEnd && colSt <= colEnd){
            if (rowEnd >= rowSt && colEnd >= colSt)
            {
                for(int i = colSt; i <= colEnd; i++){
                int n = matrix[rowSt][i];
                ans.push_back(n);
                }
            }
            
            

            rowSt++;

            if (rowEnd >= rowSt && colEnd >= colSt)
            {
                for(int i = rowSt; i <= rowEnd; i++){
                int n = matrix[i][colEnd];
                ans.push_back(n);
                }
            }
            
            

            colEnd--;

            if (colEnd >= colSt && rowEnd >= rowSt)
            {
                for(int i = colEnd; i >= colSt; i--){
                int n = matrix[rowEnd][i];
                ans.push_back(n);
                }
            }

            rowEnd--;

            if (rowEnd >= rowSt && colEnd >= colSt)
            {
                for(int i = rowEnd; i >= rowSt; i--){
                int n = matrix[i][colSt];
                ans.push_back(n);
                }
            }

            colSt++;
        }

        return ans;
        
    }
        
    
};