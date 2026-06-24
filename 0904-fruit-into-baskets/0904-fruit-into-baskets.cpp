class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> m;
        int count=0,mcount=0,l=0;
        cout<<m.size();
        for(auto i:fruits){
            if(m.find(i)==m.end()){
                if(m.size()<2){
                    m[i]++;
                    
                }
                else{
                    while(m.size()==2){
                        m[fruits[l]]--;
                        if(m[fruits[l]]==0) m.erase(fruits[l]);
                        l++;
                        count--;
                    }
                    m[i]++;
                    
                }
            }
            else{
                m[i]++;
                
            }
            count++;
            mcount=max(count,mcount);
        }
        return mcount;
    }
};