function binary(arr,element,size){
    var low = 0;
    var high = size - 1;
    while(low<=high){
        var mid = Math.floor((high+low)/2)
        if(arr[mid]== element){
            return mid
        }
        if (arr[mid] < element){
            low = mid +1 
        }
        else{
            high = mid - 1
        }
    }
    return -1
}
array = [1,2,3,4,5,6,7,8,9,10]
size = array.length
element = 7
console.log(binary(array,element,size)) 