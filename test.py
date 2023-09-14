height = [4,2,0,3,2,5]

def rainwater(height):
    size = len(height)
    leftMax = [0]*size
    rightMax = [0]*size
    ans = [0]*size

    for i in range(1, size):
        leftMax[i] = max(leftMax[i-1], height[i-1])

    for i in range(size - 2, -1, -1):
        rightMax[i] = max(rightMax[i+1], height[i+1])

    for i in range(size):
        water = min(leftMax[i], rightMax[i]) - height[i]
        if (water > 0): ans[i] = water

    return sum(ans) 

print(rainwater(height))