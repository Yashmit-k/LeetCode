class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n=grid.size();
        int m=grid[0].size();
        int s=n*m;
        vector<vector<int>> ans(n, vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int place=((i*m)+j+k)%s;
                ans[place/m][place%m]=grid[i][j];
            }
        }
        return ans;
    }
};