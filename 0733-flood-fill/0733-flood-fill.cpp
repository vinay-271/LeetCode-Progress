class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
    int color) {
        int row = image.size();
        if(!row) return image;

        int col = image[0].size();
        int originalColor = image[sr][sc];
        flood(image, sr, sc, color, originalColor, row, col);
        return image;
    }

    void flood(vector<vector<int>>& image, int sr, int sc, int color, int originalColor, int row, int col) {
        // base case
        if (image[sr][sc] == color || image[sr][sc] != originalColor)
            return;

        // self-work
        image[sr][sc] = color;
        // moving up
        if (sr > 0) {
            flood(image, sr - 1, sc, color, originalColor, row, col);
        }
        // moving down
        if (sr < row - 1) {
            flood(image, sr + 1, sc, color, originalColor, row, col);
        }
        // moving left
        if (sc > 0) {
            flood(image, sr, sc - 1, color, originalColor, row, col);
        }
        // moving right
        if (sc < col - 1) {
            flood(image, sr, sc + 1, color, originalColor, row, col);
        }
    }
};