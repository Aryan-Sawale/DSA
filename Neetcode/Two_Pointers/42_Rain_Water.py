height = [0,1,0,2,1,0,1,3,2,1,2,1]

def trap(height):
    size = len(height)
    left, right = 0, size - 1
    max_left, max_right = height[0], height[size - 1]
    water = 0

    while (left < right):
        if (max_left <= max_right):
            left += 1
            if ((max_left - height[left]) > 0):
                water += (max_left - height[left])
            max_left = max(max_left, height[left])
        
        if (max_right < max_left):
            right -= 1
            if ((max_right - height[right] > 0)):
                water += (max_right - height[right])
            max_right = max(max_right, height[right])
    
    return water

print(trap(height))                

# My approach after revisiting this problem after a while 
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