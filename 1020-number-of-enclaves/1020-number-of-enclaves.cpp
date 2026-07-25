class Solution {
public:
    int n,m;
    vector<vector<int>> v;
    void a(int x,int y,vector<vector<int>>& grid){
        if(x<0 || y<0 || x>=n || y>=m || grid[x][y]==0 || v[x][y])return;

        v[x][y]=1;

        a(x+1,y,grid);
        a(x,y+1,grid);
        a(x-1,y,grid);
        a(x,y-1,grid);

    }
    int numEnclaves(vector<vector<int>>& grid) {
        n=grid.size();
        m=grid[0].size();
        v.assign(n,vector<int>(m,0));
        for(int j=0;j<m;j++){
            if(grid[0][j]==1 && !v[0][j]){
                a(0,j,grid);
            }
            else{
                v[0][j]=1;
            }
        }
        for(int j=0;j<m;j++){
            if(grid[n-1][j]==1 && !v[n-1][j]){
                a(n-1,j,grid);
            }
            else{
                v[n-1][j]=1;
            }
        }
        for(int i=0;i<n;i++){
            if(grid[i][m-1]==1 && !v[i][m-1]){
                a(i,m-1,grid);
            }
            else{
                v[i][m-1]=1;
            }
        }
        for(int i=0;i<n;i++){
            if(grid[i][0]==1 && !v[i][0]){
                a(i,0,grid);
            }
            else{
                v[i][0]=1;
            }
        }
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(v[i][j]==0 && grid[i][j]==1){
                    count++;
                }
            }
        }
        return count;
    }
};