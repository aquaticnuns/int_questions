class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int minVal = prices[0];
        int p = 0;
        for(int i =0; i<prices.size();i++){
            minVal = min(minVal, prices[i]);
            p = max(p, (prices[i]- minVal));
            
        }
        return p;
        
    }
};