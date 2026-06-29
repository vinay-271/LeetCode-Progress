class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int used= 0;
        int iceCream = 0;
        for(int i=0 ; i<costs.size() ; i++){
            if((costs[i]+used) <= coins){
                used += costs[i];
                iceCream++;
            }
            else return iceCream; 
        }
        return iceCream;
    }
};