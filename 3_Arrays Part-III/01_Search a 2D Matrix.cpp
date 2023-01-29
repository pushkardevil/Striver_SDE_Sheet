/////////////////////////////////////////////////////////////////////////////////////////////////////

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();

        for(auto &it:matrix){
            auto a=std::find(it.begin() , it.end() , target);
            if(a != it.end()){
                return true;
            }
        }
        return false;
    }
};


///////////////////////////////////////////////////////////////////////////////////////////////////////

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();

        int i=0;
        int j=m-1;
        while(i>=0 && i < n && j>=0 && j <m){
            if(matrix[i][j] == target){
                return true;
            }
            else if(matrix[i][j] > target) j--;
            else i++;
        }
        return false;
    }
};

/////////////////////////////////////////// BINARY SEARCH //////////////////////////////////////////////////////////

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int lo = 0;
        if(!matrix.size()) return false;
        int hi = (matrix.size() * matrix[0].size()) - 1;
        
        while(lo <= hi) {
            int mid = (lo + (hi - lo) / 2);
            if(matrix[mid/matrix[0].size()][mid % matrix[0].size()] == target) {
                return true;
            }
            if(matrix[mid/matrix[0].size()][mid % matrix[0].size()] < target) {
                lo = mid + 1;
            }
            else {
                hi = mid - 1;
            }
        }
        return false;
    }
};
