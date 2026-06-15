class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<pair<char,int>> s;
        int n=matrix.size(),m=matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    s.insert({'r',i});
                    s.insert({'c',j});
                }
            }
        }
        for(auto &[x,y]:s){
            if(x=='r'){
                for(int i=0;i<m;i++){
                    matrix[y][i]=0;
                }
            }
            else{
                for(int i=0;i<n;i++){
                    matrix[i][y]=0;
                }
            }
        }
    }
};