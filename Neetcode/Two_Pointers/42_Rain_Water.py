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