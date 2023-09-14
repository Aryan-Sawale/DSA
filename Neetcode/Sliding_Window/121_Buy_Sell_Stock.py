prices = [7,1,5,3,6,4]

def stockBot2(prices):
    size = len(prices)
    left = 0
    right = 1
    maxProfit = 0
    while (right < size):
        maxProfit = max(maxProfit, prices[right] - prices[left])
        if (prices[right] < prices[left]): left = right
        right += 1
    
    return maxProfit

print(stockBot2(prices))   

# my solution O(n) and O(n)
def stockBot(prices):
    size = len(prices)
    rightMax = [0]*size
    for i in range(size - 2, -1, -1):
        rightMax[i] = max(rightMax[i+1], prices[i+1])
    
    maxProfit = 0
    for i in range(size):
        maxProfit = max(maxProfit, rightMax[i] - prices[i])

    return maxProfit