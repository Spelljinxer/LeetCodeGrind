
def two_sum(list, target):
    for i in range(len(list)):
        for j in range(i+1, len(list)):
            if list[i] + list[j] == target:
                return [i, j]

list = [2,7,11,15]
target = 9

print(two_sum(list, target))
