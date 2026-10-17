class Solution {
public:
    int digitsum(int x) {
        int sum = 0;
        while (x > 0) {
            sum += x % 10;
            x /= 10;
        }
        return sum;
    }

    int minSwaps(vector<int>& nums) {
        vector<int> temp = nums;
        int n = nums.size();

        unordered_map<int, int> mp;
        unordered_map<int, int> pos;

        for (int i = 0; i < n; i++) {
            mp[nums[i]] = digitsum(nums[i]);
            pos[nums[i]] = i;
        }

        sort(nums.begin(), nums.end(), [&mp](const int& a, const int& b) {
            if (mp[a] == mp[b]) {
                return a < b;
            }
            return mp[a] < mp[b];
        });
        vector<int> perm(n);

        for (int i = 0; i < n; i++) {
            perm[pos[nums[i]]] = i;
        }

        vector<bool> visited(n, false);
        int ans = 0;

        for (int i = 0; i < n; i++) {
            if (visited[i]) continue;

            int j = i;
            int cycle = 0;

            while (!visited[j]) {
                visited[j] = true;
                j = perm[j];
                cycle++;
            }

            if (cycle > 1) {
                ans += cycle - 1;
            }
        }

        return ans;
    }
};