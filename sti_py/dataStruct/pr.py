def sum(arr, n):
    total = 0
    for i in range(n):
        total += arr[i]
    return total


listA = [1,2,3,4]
print(sum(listA, 4))
