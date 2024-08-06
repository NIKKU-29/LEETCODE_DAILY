class Solution {
public:
    void bfs(vector<vector<char>>& grid, int i, int j,int n,int m) {

        queue<pair<int, int>> q;
        q.push({i, j});
        grid[i][j] = '#';

        while (!q.empty()) {
            pair<int, int> p;
            p = q.front();
            q.pop();

            int A[4] = {1, -1, 0, 0};
            int B[4] = {0, 0, 1, -1};

            for (int i = 0; i < 4; i++) {
                int newi = p.first + A[i];
                int newj = p.second + B[i];

                if (newi >= m || newi < 0 || newj >= n || newj < 0 ||
                    grid[newi][newj] != '1') {
                    continue;
                }

                else {
                    grid[newi][newj] = '#';
                    q.push({newi, newj});
                }
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {

        int iland = 0;
        int m = grid.size();
        int n = grid[0].size();

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == '1') {
                    bfs(grid, i, j, n, m);
                    iland++;
                }
            }
        }

        return iland;
    }
};