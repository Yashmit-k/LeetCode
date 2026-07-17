class Solution {
public:
    vector<int> numMovesStones(int a, int b, int c) {
        vector<int> x={a,b,c};
        sort(x.begin(),x.end());
        int g1=x[1]-x[0]-1,g2=x[2]-x[1]-1;
        if(g1==0 && g2==0)return {0,0};
        
        else if(g1==0){
            return {1,g2};
        }
        else if(g2==0){
            return {1,g1};
        }
        else{
            return {min(2,min(g1,g2)),g1+g2};
        }
        return {};
    }
};