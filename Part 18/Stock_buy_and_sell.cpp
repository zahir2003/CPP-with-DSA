#include <iostream>
#include <vector>
#include <algorithm> // for max and min
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty()) return 0;

        int maxProfit = 0, bestBuy = prices[0];
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] > bestBuy) {
                maxProfit = max(maxProfit, prices[i] - bestBuy);
            }
            bestBuy = min(bestBuy, prices[i]);
        }
        return maxProfit;
    }
};

int main() {
    Solution sol;
    vector<int> prices = {7, 1, 5, 3, 6, 4}; // Sample input
    int profit = sol.maxProfit(prices);
    cout << "Maximum Profit: " << profit << endl; // Expected: 5 (Buy at 1, sell at 6)

    return 0;
}
