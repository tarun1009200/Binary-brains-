def search_insert(nums, target):
    low, high = 0, len(nums) - 1

    while low <= high:
        mid = (low + high) // 2
        mid_val = nums[mid]

        if mid_val == target:
            return mid
        elif mid_val < target:
            low = mid + 1
        else:
            high = mid - 1

    return low

nums = [1, 3, 5, 6]
target = 5
position = search_insert(nums, target)
print(position)  
