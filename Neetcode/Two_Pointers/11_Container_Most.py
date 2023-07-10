height = [1,8,6,2,5,4,8,3,7]

def maxArea(height):
    size = len(height)
    left, right = 0, size - 1
    maxWater = -1

    while (left < right):
        maxWater = max(maxWater, (min(height[left], height[right]) * (right - left) ) )
        if (height[left] <= height[right]):
            left += 1
    
        else:
            right -= 1
        
    return maxWater

print(maxArea(height))



# brute force O(n^2)
def maxArea2(height):
    size = len(height)
    maxWater = -1
    for i in range(size):
        left, right = i, size - 1
        while (left < right):
          water = (min(height[left], height[right])) * (right - left)
          maxWater = max(maxWater, water)
          right -= 1
    
    return maxWater