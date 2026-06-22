class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0,m=matrix[0].size()-1,n=matrix.size();
        while(i<n && m>=0){
            if(matrix[i][m]==target)return true;

            else if(target>matrix[i][m])i++;
            else m--;
        }
        return false;
    }
};