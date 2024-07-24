def linear(arr,size,element):
    for i in arr:
        if i == element:
            return arr.index(i)
    
    return -1
arr = [1,2,3,4,5,6,7,8,9,10]
SIZE = len(arr)
element = 5
result = linear(arr,SIZE,element)
if result != -1:
    print("Element is present at index " + str(result))