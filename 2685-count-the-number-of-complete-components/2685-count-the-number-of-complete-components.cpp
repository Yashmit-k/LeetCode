class Solution {
public:
    vector<int> v;

    bool bfs(vector<vector<int>>& e, int start) {
        queue<int> q;
        vector<int> component;

        v[start] = 1;
        q.push(start);

        while (!q.empty()) {
            int x = q.front();
            q.pop();

            component.push_back(x);

            for (auto i : e[x]) {
                if (v[i] == 0) {
                    v[i] = 1;
                    q.push(i);
                }
            }
        }

        int k = component.size();

        for (auto node : component) {
            if (e[node].size() != k - 1) {
                return false;
            }
        }

        return true;
    }

    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> e(n);
        int ans = 0;

        for (auto edge : edges) {
            e[edge[0]].push_back(edge[1]);
            e[edge[1]].push_back(edge[0]);
        }

        v.assign(n, 0);

        for (int i = 0; i < n; i++) {
            if (v[i] == 0) {
                if (bfs(e, i)) {
                    ans++;
                }
            }
        }

        return ans;
    }
};