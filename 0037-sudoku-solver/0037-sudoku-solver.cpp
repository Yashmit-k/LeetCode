vector<unordered_set<char>> r(9),c(9),b(9);
class Solution {
    
public:
    bool l(vector<vector<char>>& board){
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.'){
                    for(int k=1;k<10;k++){
                        char x=k+'0';
                        if(r[i].find(x)==r[i].end() && c[j].find(x)==c[j].end()){
                            int box=(i/3)*3 + (j/3);
                            if(b[box].find(x)==b[box].end()){
                                board[i][j]=x;
                                r[i].insert(x);
                                c[j].insert(x);
                                b[box].insert(x);
                                if(l(board))return true;
                                
                                board[i][j]='.';
                                r[i].erase(x);
                                c[j].erase(x);
                                b[box].erase(x);
                            }
                        }
                    }
                    return false;
                }
            }
            
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        r.assign(9, unordered_set<char>());
        c.assign(9, unordered_set<char>());
        b.assign(9, unordered_set<char>());
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                char x=board[i][j];
                if(x=='.')continue;
                r[i].insert(x);
                c[j].insert(x);
                int box=(i/3)*3 + (j/3);
                b[box].insert(x);

            }
        }
        l(board);
        
    }
};