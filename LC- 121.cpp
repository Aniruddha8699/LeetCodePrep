class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l=0,r=1;
        int n = prices.size();
        int target=0;
        while(r<n){
            target = max(target, (prices[r]-prices[l]));
            if((prices[r]-prices[l]) < 0) {
                l=r;
            }
            r++;
        }
        return target;
    }
};
