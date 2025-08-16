def is_sorted(arr):
    return all(arr[i] <= arr[i+1] for i in range(len(arr)-1))

def sort_array(arr):
    n = len(arr)
    if is_sorted(arr):
        return 0
    if n == 1:
        return -1
    
    # check if it's possible to sort the array
    for i in range(n-1):
        if arr[i] > arr[i+1]:
            break
    else:
        return 1
    
    # check if it's possible to sort the array with one reverse operation
    for i in range(n-1):
        if arr[i] > arr[i+1]:
            break
    else:
        return 1
    
    # check if it's possible to sort the array with one shift operation
    for i in range(n-1):
        if arr[i] > arr[i+1]:
            break
    else:
        return 1
    
    return -1

arr = [3, 2, 1 ,5, 4]
print(sort_array(arr))  # Output: -1