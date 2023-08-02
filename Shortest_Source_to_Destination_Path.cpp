class Solution {
public:
    int shortestDistance(int N, int M, vector<vector<int>>& A, int X, int Y) {
        int dx[] = {-1, 1, 0, 0};
        int dy[] = {0, 0, -1, 1};

        if (A[0][0] == 0) {
            return -1;
        }

        vector<vector<bool>> visited(N, vector<bool>(M, false));
        queue<pair<int, int>> q;
        q.push({0, 0});
        visited[0][0] = true;

        int steps = 0;

        while (!q.empty()) {
            int size = q.size();

            for (int i = 0; i < size; ++i) {
                int x = q.front().first;
                int y = q.front().second;
                q.pop();

                if (x == X && y == Y) {
                    return steps;
                }

                for (int dir = 0; dir < 4; ++dir) {
                    int newX = x + dx[dir];
                    int newY = y + dy[dir];

                    if (newX >= 0 && newX < N && newY >= 0 && newY < M && A[newX][newY] == 1 && !visited[newX][newY]) {
                        q.push({newX, newY});
                        visited[newX][newY] = true;
                    }
                }
            }

            ++steps;
        }

        return -1;
    }
};
