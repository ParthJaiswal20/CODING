// THE MATRIX WILL BE HAVING THE
// NO OF ROWS == NO OF COLMS
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        int size = matrix.size();
        int num_rotate = size / 2;
        int row;
        int col;

        // HERE DOING THE TRANSPOSE
        for (row = 0; row < matrix.size(); row++) {
        for (col = row+1; col < matrix.size(); col++) {
                swap(matrix[col][row], matrix[row][col]);
            }
        }
        for (row = 0; row < matrix.size(); row++) {
            int left = 0;
            int right = size - 1;
            while (left < right) {
                swap(matrix[row][left] , matrix[row][right]);
                left++;
                right--;
            }
        }
    }
};