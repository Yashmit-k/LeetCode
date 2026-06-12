class Solution {
public:
    vector<vector<int>> v;
    int orangesRotting(vector<vector<int>>& grid) {
        int time=0,count=0,fresh=0;
        int n=grid.size(),m=grid[0].size();
        v.assign(grid.size(), vector<int>(grid[0].size(), 0));
        queue<tuple<int,int,int>> q;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==2){
                    q.push({i,j,0});
                }
                else if(grid[i][j]==1){
                    fresh++;
                }
            }
        }
        vector<pair<int,int>> dir={{-1,0},{0,1},{1,0},{0,-1}};
        while(!q.empty()){
            auto [i,j,t]=q.front();
            time=max(t,time);
            q.pop();
            
                for(auto [r,c]:dir){
                    if(i+r>=0 && j+c>=0 && i+r<n && j+c<m && grid[i+r][j+c]==1){
                        q.push({i+r,j+c,t+1});
                        grid[i+r][j+c]=2;
                        fresh--;
                    }
                }
            
        }
        cout<<count;
        if(fresh==0){
            return time;
        }
        else return -1;
    }
};