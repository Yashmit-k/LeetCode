class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int> v(n,-1);
        queue<int> q;
        for(int i=0;i<n;i++){
            if(v[i]==-1){
                q.push(i);
                v[i]=0;
                while(!q.empty()){
                    int x=q.front();
                    q.pop();
                    for(auto node:graph[x]){
                        if(v[node]==-1){
                            v[node]=1-v[x];
                            q.push(node);
                        }
                        else if(v[node]!=1-v[x])return false;
                    }
                }
            }
        }
        return true;
    }
};