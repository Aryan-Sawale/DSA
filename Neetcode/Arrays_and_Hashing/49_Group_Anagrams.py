from collections import defaultdict

strings = ["eat","tea","tan","ate","nat","bat"]

def groupAnagrams(strings):
    dict = {}
    results = []
    for i in range(len(strings)):
        key = ''.join(sorted(strings[i]))
        dict[key] = dict.get(key, []) + [strings[i]]
    # intiialize the default value of each group as an empty list using get function, otherwise you would get a key error

    for key in dict:
        results.append(dict[key])

    return results

results = groupAnagrams(strings)
for i in range(len(results)):
    for j in range(len(results[i])):
        print(results[i][j], end=" ")
    print()
# print gives a newline by default, this can be modified by end=


'''
# The .get() shpeel can be avoided with defaultdict

def groupAnagrams(strings):
    dict = defaultdict(list)
    results = []
    for i in range(len(strings)):
        key = ''.join(sorted(strings[i]))
        dict[key].append(strings[i])

    for key in dict:
        results.append(dict[key])

    return results

'''

'''
# This one has better theoretical complexity (O(n*m)) but leads to lower actual performance for some reason
def groupAnagrams(strings):
    groups = collections.defaultdict(list)
    results = []
    for s in strings:
        count = [0] * 26
        for c in s:
            count[ord(c) - ord('a')] += 1
        groups[tuple(count)].append(s)
    
    for key in groups:
        results.append(groups[key])
    
    return results
'''