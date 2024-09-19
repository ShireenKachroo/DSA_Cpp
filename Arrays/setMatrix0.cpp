/* BRUTE FORCE-->T.C O(N3), S.C O(1) 
class Solution {
public:

    void markRow(vector<vector<int>>& arr,int i, int cols){
        for(int j=0;j<cols;j++){
            if(arr[i][j] != 0) arr[i][j] = -1;
        }
        return;
    }

    void markCol(vector<vector<int>>& arr,int j, int rows){
        for(int i=0;i<rows;i++){
            if(arr[i][j] != 0) arr[i][j] = -1;
        }
        return;
    }

    void setZeroes(vector<vector<int>>& arr) {
        int rows = arr.size();
        int cols = arr[0].size();
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(arr[i][j] == 0){
                    //turn all ele in that row/col as -1
                    markRow(arr,i,cols);
                    markCol(arr,j,rows);
                }
            }
        }

        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(arr[i][j] == -1) arr[i][j] = 0;
            }
        }
    }
};*/

class Solution {
public:

    void markRow(vector<vector<int>>& arr,int i, int cols){
        for(int j=0;j<cols;j++){
            if(arr[i][j] != 0) arr[i][j] = -1;
        }
        return;
    }

    void markCol(vector<vector<int>>& arr,int j, int rows){
        for(int i=0;i<rows;i++){
            if(arr[i][j] != 0) arr[i][j] = -1;
        }
        return;
    }

    void setZeroes(vector<vector<int>>& arr) {
        /*BETTER SOLUTION---->T.C: O(rows*cols) ~ O(N2) , s.c:O(rows+cols)*/
        int rows = arr.size();
        int cols = arr[0].size();

        int *rowMatrix = new int[rows]();
        int *colMatrix = new int[cols]();

        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(arr[i][j] == 0){
                    rowMatrix[i] = 1;
                    colMatrix[j] = 1;
                }
            }
        }

        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(rowMatrix[i] == 1 || colMatrix[j] == 1){
                    arr[i][j] = 0;
                }
            }
        }

    }
};
