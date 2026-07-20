class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int row = grid.size();
        int col = grid[0].size();

        // k %= col;

        vector<int> flat;
        vector<int> copy;

        for (const auto &row : grid) {
            for (int x : row) {
                flat.push_back(x);
                copy.push_back(x);
            }
        }
        int size = copy.size();

        for (int i = 0; i < size; i++) {
            copy[(i + k) % size] = flat[i];
        }

        for (int i = 0; i < size; i++) {
        int r = i / col;
        int c = i % col;

        grid[r][c] = copy[i];
        }

        return grid;
    }
};