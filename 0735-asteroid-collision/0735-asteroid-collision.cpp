class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> ans;
        for(auto i:asteroids){
            if(ans.empty() || i>0 || ans.back()*i>0){
                ans.push_back(i);
                continue;
            }
            while(!ans.empty() && abs(i)>ans.back() && ans.back()*i<0 )ans.pop_back();
            if(ans.empty() || ans.back()*i>0 )ans.push_back(i);
            else if(ans.back()==abs(i))ans.pop_back();
        }
        return ans;
    }
};