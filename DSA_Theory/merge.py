def merge_sort(arr):
    if len(arr) > 1:
        mid = len(arr) // 2
        left_half = arr[:mid]
        right_half = arr[mid:]

        merge_sort(left_half)
        merge_sort(right_half)

        i = j = k = 0

        # Merge the two sublists
        while i < len(left_half) and j < len(right_half):
            if left_half[i] < right_half[j]:
                arr[k] = left_half[i]
                i += 1
            else:
                arr[k] = right_half[j]
                j += 1
            k += 1

        while i < len(left_half):
            arr[k] = left_half[i]
            i += 1
            k += 1

        while j < len(right_half):
            arr[k] = right_half[j]
            j += 1
            k += 1

# Example usage:
if __name__ == '__main__':
    my_list = [38, 27, 43, 3, 9, 82, 10]
    # my_list = [int(i) for i in input().split()]
    merge_sort(my_list)
    print(my_list)  # Output: [3, 9, 10, 27, 38, 43, 82]

'''
Print version

def merge_sort(arr):
    if len(arr) > 1:
        mid = len(arr) // 2
        left_half = arr[:mid]
        right_half = arr[mid:]
        print("left half:", left_half, arr)
        print("right half:", right_half, arr)

        merge_sort(left_half)
        merge_sort(right_half)

        print("after left half:", left_half, arr)
        print("after right half:", right_half, arr)

        i = j = k = 0

        print("arr before:", arr)
        # Merge the two sublists
        while i < len(left_half) and j < len(right_half):
            if left_half[i] < right_half[j]:
                arr[k] = left_half[i]
                i += 1
            else:
                arr[k] = right_half[j]
                j += 1
            k += 1

        while i < len(left_half):
            arr[k] = left_half[i]
            i += 1
            k += 1

        while j < len(right_half):
            arr[k] = right_half[j]
            j += 1
            k += 1
        print("arr after:", arr)
'''