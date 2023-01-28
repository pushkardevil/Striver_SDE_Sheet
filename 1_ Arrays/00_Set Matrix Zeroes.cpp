/////////////////////////////////////////////////// Brute Force  //////////////////////////////////////////////////////////////////////////

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j] == 0){
                    for(int p=0;p<n;p++){
                        if(matrix[i][p] != 0){
                            matrix[i][p]='#';
                        }
                    }

                    for(int k=0;k<m;k++){
                        if(matrix[k][j] != 0){
                            matrix[k][j]='#';
                        }
                    }                          
               }
            }
        }


        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j] == '#'){
                    matrix[i][j]=0;
                }
            }
        }


    }
};


//////////////////////////////////////////////////Optimised ///////////////////////////////////////////////////////////////////////////////

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows=matrix.size();
        int cols=matrix[0].size();
        
        vector < int > v1(rows,-1), v2(cols,-1);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == 0) {
                v1[i] = 0;
                v2[j] = 0;
            }
            }

        }
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++){
                if(v1[i] == 0 || v2[j]==0) matrix[i][j] = 0;
            }
        }

    }
};
