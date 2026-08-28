class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = INT_MAX;
        int profit = 0;

        for(int price : prices){
            if(price < min){
                min = price;
            }
            profit = max(profit , (price-min));
        }
        return profit;
    }
};