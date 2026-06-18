
class Solution {

public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> r(9),c(9),b(9);
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                char x=board[i][j];
                if(x!='.'){
                    if(r[i].find(x)==r[i].end()){
                        r[i].insert(board[i][j]);
                    }
                    else{
                        return false;
                    }
                    if(c[j].find(x)==c[j].end()){
                        c[j].insert(board[i][j]);
                    }
                    else{
                        return false;
                    }
                    int box = (i / 3) * 3 + (j / 3);
                    if(b[box].find(x)==b[box].end()){
                        b[box].insert(board[i][j]);
                    }
                    else{
                        return false;
                    }
                }
            }
        }
        return true;
    }
};