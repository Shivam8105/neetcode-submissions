class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<int> stock(n);
        stock[n - 1] = prices[n - 1];

        for(int i = n - 2; i >= 0; i--){
            stock[i] = max(stock[i + 1],prices[i]);
        }

        int diff = 0;

        for(int i = 0; i < n; i++){
            diff = max(diff,abs(stock[i] - prices[i]));
        }
        return diff;
    }
};
