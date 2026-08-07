class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
       // TRAVERSING & FIND THE ( ROW , COL ) VALUE 
        int rows = matrix.size();
        int cols = matrix[0].size();
        int inner;
        int outer;
        vector<int> col(cols, 0);
        vector<int> row(rows, 0);
        for (outer = 0; outer < rows; outer++) {
            for (inner = 0; inner < cols; inner++){
                if(matrix[outer][inner] == 0){
                    row[outer] = -1;
                    col[inner] = -1;
                }
            }
        }

        // AGAIN TRAVERSE AND AT THOSE
        // PARTICULAR ROW & COL PUT 0
         for (outer = 0; outer < rows; outer++) {
            for (inner = 0; inner < cols; inner++){
                if(row[outer] == -1 || col[inner] == -1){
                    matrix[outer][inner] = 0;
                }
            }
        }
    }
};