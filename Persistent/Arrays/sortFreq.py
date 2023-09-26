# converted using chatGPT

def sort_freq_vanilla(nums):
    freq_map = {}  # Dictionary to store the frequency of each element

    for num in nums:
        if num in freq_map:
            freq_map[num] += 1
        else:
            freq_map[num] = 1

    # Create a list of tuples (element, frequency)
    pairs = [(key, value) for key, value in freq_map.items()]

    # Sort the list of pairs using a custom comparator
    def comparator(pair):
        if pair[1] == pairs[0][1]:
            return -pair[0]
        return pair[1]

    pairs.sort(key=comparator, reverse=True)

    # Generate the result list
    result = []
    for pair in pairs:
        result.extend([pair[0]] * pair[1])

    return result

# Example usage:
nums = [4, 2, 2, 8, 3, 3, 1]
sorted_nums = sort_freq_vanilla(nums)
print(sorted_nums)