class Solution {
public:
    int maximumSaleItems(vector<vector<int>>& items, int budget) {
        int n = items.size(), cheapest = INT_MAX;
        vector<int> have(n + 1);  // have[f]: items with factor f
        for (auto& item : items) {
            have[item[0]]++;
            cheapest = min(cheapest, item[1]);
        }
        vector<int> deals(n + 1, -1);  // copies that come with a free one; from -1: the item itself is not a deal
        for (int factor = 1; factor <= n; factor++)
            for (int multiple = factor; multiple <= n; multiple += factor)
                deals[factor] += have[multiple];

        vector<pair<int, int>> worth;
        for (auto& item : items)
            if (item[1] < 2 * cheapest) worth.emplace_back(item[1], item[0]);
        ranges::sort(worth);  // cheapest first
        int copies = 0;
        for (auto [price, factor] : worth) {
            int pairs = min(deals[factor], budget / price);  // buy one, get one free
            copies += 2 * pairs;
            budget -= pairs * price;
        }
        return copies + budget / cheapest;  // the rest goes to the cheapest item
    }
};