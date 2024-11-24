class Solution {
    public int maxProfit(int[] prices) {
        int length = prices.length;
        int minPrice = Integer.MAX_VALUE;
        int maxProfit = 0;
        
        for (int i = 0; i < length; i++)
        {
            if (prices[i] < minPrice)
            {
                minPrice = prices[i];
            }
            
            int profit = prices[i] - minPrice;
            
            if (profit > maxProfit)
            {
                maxProfit = profit;
            }
        }
        
        return maxProfit;
    }
}
