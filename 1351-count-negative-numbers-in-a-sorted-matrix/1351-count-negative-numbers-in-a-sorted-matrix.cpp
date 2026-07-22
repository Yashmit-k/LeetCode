class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m=grid[0].size();
        int n=grid.size();
        int l=0,r=n-1;
        while(l<r){
            int mid=l+(r-l)/2;
            if(grid[mid][m-1]<0)r=mid-1;
            else l=mid+1;
            
        }
        int count=0;
        for(int i=l;i<n;i++){
            int j=m-1;
            while(j>=0 && grid[i][j]<0){
                count++;
                j--;
            }
        }
        return count;
    }
};