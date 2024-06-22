from collections import defaultdict

strs = ["eat", "tea", "tan", "ate", "nat", "bat"]


def groupAnagrams(strs):
    umap = defaultdict(list)
    for i in range(len(strs)):
        key = "".join(sorted(strs[i]))
        umap[key].append(strs[i])

    result = []
    for key in umap:
        result.append(umap[key])

    return result


print(groupAnagrams(strs))
