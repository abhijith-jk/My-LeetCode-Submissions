class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        vector<int> row (m, -1), col (n, -1);
        
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                if(matrix[i][j] == 0) {
                    row[i] = i;
                    col[j] = j;
                }
            }
        }
        
        int i = 0, j =0;
        while (i<m) {
             
            while(j<n) {
                if(row[i] != -1) matrix[i][j] = 0;
                if(col[j] != -1) {
                    matrix[i][j] = 0;
                }
                j++;
            }
            i++;
            j = 0;
        }
    }
};