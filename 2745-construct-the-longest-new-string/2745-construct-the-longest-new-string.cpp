class Solution {
public:
    int longestString(int x, int y, int z) {
        if(x==y){
            return 2*(x+y+z);
        }
        else if(x>y){
            return 2*(y+y+1+z);
        }
        else{
            return 2*(x+x+1+z);
        }
    }
};