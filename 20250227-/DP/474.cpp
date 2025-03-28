class Solution {
    public:
        int findMaxForm(vector<string>& strs, int m, int n) {
            int length = strs.size();
            vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
            for (int k = 0; k < length; k++) {
                int one = 0, zero = 0;
                for (char c : strs[k]) {
                    if (c == '1') {
                        one++;
                    }
                }
                zero = strs[k].length() - one;
                for (int i = m; i >= zero; i--) {
                    for (int j = n; j >= one; j--) {
                        dp[i][j] = max(dp[i][j], dp[i - zero][j - one] + 1);
                    }
                }
            }
            return dp[m][n];
        }
    };