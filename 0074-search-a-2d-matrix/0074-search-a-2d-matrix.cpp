class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l=0,r=matrix.size()-1,m,n=matrix[0].size()-1,m1;
        while(l<=r){
            m=l+(r-l)/2;
            if(target>=matrix[m][0] && target<=matrix[m][n]){
                break;
            }
            else if(matrix[m][0]>target){
                r=m-1;
            }
            else{
                l=m+1;
            }
        }
        cout<<m;
        l=0;
        while(l<=n){
            m1=l+(n-l)/2;
            if(matrix[m][m1]==target){
                return true;
            }
            else if(matrix[m][m1]>target){
                n=m1-1;
            }
            else{
                l=m1+1;
            }
        }
        return false;
        
    }
};