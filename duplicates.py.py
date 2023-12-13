def remove_duplicates(nums):
    if not nums:
        return 0

    # Use two pointers approach
    i = 0
    for j in range(1, len(nums)):
        if nums[j] != nums[i]:
            i += 1
            nums[i] = nums[j]

    return i + 1
nums = [1, 1, 2, 2, 3, 4, 4, 5]
length = remove_duplicates(nums)
print(nums[:length])  # Output: [1, 2, 3, 4, 5]
