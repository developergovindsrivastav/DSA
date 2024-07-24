import math
def binary(list,element,size0):
    low = 0
    high = size0 - 1
    while low<=high:
        mid = math.floor((high- low) / 2) 
        if list[mid] == element:
            return mid
        if list[mid]< element:
            low = mid +1
        else:
            high = mid-1
    return -1

arr = [1,2,3,4,5,6,7,8,9,10]
element = 5
size0 = len(arr)
result = binary(arr,element,size0)
if result != -1:
    print("Element is present at index " + str(result))