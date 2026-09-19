class Solution {
private:
    int solve(int n, unordered_map<int, int>& dp) {
        if (n <= 1) {
            return n;
        }

        if (dp.count(n)) {
            return dp[n];
        }
        int eatTwo = (n % 2) + 1 + solve(n / 2, dp);

        int eatThree = (n % 3) + 1 + solve(n / 3, dp);

        return dp[n] = min(eatTwo, eatThree);
    }

public:
    int minDays(int n) {
        unordered_map<int, int> dp;
        return solve(n, dp);
    }
};