import heapq
from collections import defaultdict


def top_k_frequent(nums, k):
    # Step 1: Count frequency of each element using a dictionary
    freq_map = defaultdict(int)
    for num in nums:
        freq_map[num] += 1

    # Step 2: Use a min-heap to maintain the top k frequent elements
    min_heap = []
    for num, freq in freq_map.items():
        heapq.heappush(min_heap, (freq, num))
        if len(min_heap) > k:
            heapq.heappop(min_heap)

    # Step 3: Extract top k frequent elements from the heap
    top_k_elements = []
    while min_heap:
        top_k_elements.append(heapq.heappop(min_heap)[1])

    return top_k_elements[::-1]
    # Reverse to get elements in descending order of frequency


# Example usage:
if __name__ == "__main__":
    nums = [1, 1, 1, 2, 2, 3]
    k = 2
    result = top_k_frequent(nums, k)
    print(f"Top {k} frequent elements:", result)  # Output: [1, 2]
