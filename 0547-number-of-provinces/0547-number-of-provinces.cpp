class Solution {
public:
    vector<int> v;
    int n;
    void bfs(vector<vector<int>>& g,int k)
    {
        queue<int> q;
        v[k]=1;
        q.push(k);
        while(!q.empty()){
            int s=q.front();
            q.pop();
            for(int i=0;i<n;i++){
                if(g[s][i] && !v[i]){
                    v[i]=1;
                    q.push(i);
                }
            }
        }
    }
    int findCircleNum(vector<vector<int>>& g) {
        n=g.size();int count=0;
        v.assign(n,0);
        for(int i=0;i<n;i++){
            if(v[i]==0){
                count++;
                bfs(g,i);
            }
        }
        return count;
    }
};