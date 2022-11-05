

def two_sum(nums, target):
    #O(n log n) time complexity
    #O(1) space
    visited = {}
    for index, value in enumerate(nums):
        remaining = target - nums[index]

        if remaining in visited:
            return[index, visited[remaining]]
        
        remaining[value] = index
    
    

    

list = [2,7,11,15]
target = 9

print(two_sum(list, target))
