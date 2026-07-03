class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int b=INT_MAX,p,mp=INT_MIN;
        for(auto i:prices){
            if(i<b){
                b=i;
                continue;
            }
            else{
                p=i-b;
                mp=max(p,mp);
            }
        }
        if(mp==INT_MIN)return 0;
        return mp;
    }
};