class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>> s;
        for(int i=temperatures.size()-1;i>=0;i--){
            if(s.empty()){
                s.push({temperatures[i],i});
                temperatures[i]=0;
            }
            else if(temperatures[i]<s.top().first){
                int x=s.top().second;
                s.push({temperatures[i],i});
                temperatures[i]=x-i;
            }
            else{
                while(!s.empty() && temperatures[i]>=s.top().first)s.pop();
                if(s.empty()){
                    s.push({temperatures[i],i});
                    temperatures[i]=0;
                }
                else{
                    int x=s.top().second;
                    s.push({temperatures[i],i});
                    temperatures[i]=x-i;
                }
            }

        }
        return temperatures;
    }
};