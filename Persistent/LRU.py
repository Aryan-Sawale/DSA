def lru_cache(jobs, cache_size):
    cache = []
    faults = 0;
    for job in jobs:
        if job in cache:
            # Move the accessed job to the end of the list to maintain LRU order
            cache.remove(job)
            cache.append(job)
        else:
            faults += 1;
            if len(cache) >= cache_size:
                # Remove the least recently used job (first job in the list)
                cache.pop(0)
            cache.append(job)

    return faults

# Usage
jobs = [1, 2, 1, 3, 1, 2]
cache_size = 2
result = lru_cache(jobs, cache_size)
print(result)  # Output: [2, 3, 1] (LRU cache after processing the jobs)

"""
from collections import deque

def lru_cache(jobs, cache_size):
    cache = deque(maxlen=cache_size)

    for job in jobs:
        if job in cache:
            # Move the accessed job to the end of the deque to maintain LRU order
            cache.remove(job)
            cache.append(job)
        else:
            cache.append(job)

    return list(cache)

# Usage
jobs = [1, 2, 3, 1, 2, 3]
cache_size = 3
result = lru_cache(jobs, cache_size)
print(result)  # Output: [2, 3, 1] (LRU cache after processing the jobs)
"""