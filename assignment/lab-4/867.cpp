class Solution {
public:
    std::vector<std::vector<int>> transpose(std::vector<std::vector<int>>& A) {
        int R = A.size(), C = A[0].size();
        std::vector<std::vector<int>> ans(C, std::vector<int>(R));
        for (int r = 0; r < R; ++r) {
            for (int c = 0; c < C; ++c) {
                ans[c][r] = A[r][c];
            }
        }
        return ans;
    }
};