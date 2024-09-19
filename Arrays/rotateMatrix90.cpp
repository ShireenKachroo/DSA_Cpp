/*BRUTE FORCE--> O(N*M) AND S.C: O(N)
void rotate(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<vector<int>> rotatedMatrix(rows, vector<int>(cols));
        //after rotation, first row-->last col, 2nd row---> second last col ....
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                rotatedMatrix[j][rows-i-1] = matrix[i][j];
            }
        }
        matrix = rotatedMatrix;
    }*/

/*BETTER SOLUTION*/
void rotate(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        //take transpose
        for(int i=0;i<rows-1;i++){
            for(int j=i+1;j<rows;j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        //reverse each row after taking transpose
        for(int i=0;i<rows;i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
