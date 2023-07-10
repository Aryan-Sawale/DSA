import collections
nums, k = [1,1,1,2,2,3], 2

def topKFrequent(nums, k):
    dict = collections.defaultdict(int)

    for num in nums:
        dict[num] += 1
    
    counts = sorted(dict.items(), key=lambda item: item[1], reverse=True)

    results = []
    for i in range(k):
        results.append(counts[i][0])
    
    return results

print(topKFrequent(nums, k))