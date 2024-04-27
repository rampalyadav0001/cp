#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int MinimumEffort(vector<vector<int>>& heights) {
        int n = heights.size();
        int m = heights[0].size();
        vector<vector<int>> dist(n, vector<int>(m, 1e9));
        vector<vector<int>>visited(n,vector<int>(m,0));
        // priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
        queue<pair<int,pair<int,int>>>pq;
        pq.push({heights[0][0], {0, 0}});
        dist[0][0] = heights[0][0];
        visited[0][0]=1;
        while (!pq.empty()) {
            auto it = pq.front();
            pq.pop();
            int d = it.first;
            int i = it.second.first;
            int j = it.second.second;
            int dx[4] = {-1, 0, 1, 0};
            int dy[4] = {0, 1, 0, -1};
            for (int k = 0; k < 4; k++) {
                int p = i + dx[k], q = j + dy[k];
                if (p >= 0 && q >= 0 && p < n && q < m&&!visited[p][q]) {
                    dist[p][q] = min(dist[p][q], max(abs(d - heights[p][q]), dist[i][j]));
                    pq.push({dist[p][q], {p, q}});
                    visited[p][q]=1;
                }
            }
        }
        return dist[n - 1][m - 1];
    }
};

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> heights;
        for (int i = 0; i < n; ++i) {
            vector<int> temp;
            for (int j = 0; j < m; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            heights.push_back(temp);
        }
        Solution obj;
        cout << obj.MinimumEffort(heights) << "\n";
    }
    return 0;
}
