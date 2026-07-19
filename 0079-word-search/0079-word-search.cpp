class Solution {
public:
    int n,m,size;
    bool a(vector<vector<char>>& board, string word,int i,int j,int index){
        if(index==size)return true;
        else if(i<0 || i>=n || j<0 || j>=m)return false;
        else if(board[i][j]!=word[index])return false;

            char temp = board[i][j];
            board[i][j] = '#';

            bool ans = a(board, word, i+1, j, index+1) ||
                    a(board, word, i, j+1, index+1) ||
                    a(board, word, i-1, j, index+1) ||
                    a(board, word, i, j-1, index+1);

            // Backtrack: restore the cell
            board[i][j] = temp;
            return ans;
    }
    bool exist(vector<vector<char>>& board, string word) {
        n=board.size(),m=board[0].size(),size=word.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==word[0] && a(board,word,i,j,0))return true;
            }
        }
        return false;
    }
};