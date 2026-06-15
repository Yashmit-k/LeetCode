class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int t=0,l=0,r=matrix.size()-1,d=r;
        while(l<r && t<d){
            for(int i=0;i<r-l;i++){
                int temp=matrix[t][l+i];
                matrix[t][l+i]=matrix[d-i][l];
                matrix[d-i][l]=matrix[d][r-i];
                matrix[d][r-i]=matrix[t+i][r];
                matrix[t+i][r]=temp;
            }
            t++;
            l++;
            d--;
            r--;
        }
    }
};