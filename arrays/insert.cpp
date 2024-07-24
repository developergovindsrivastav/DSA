#include <iostream>
using namespace std;

void funcout(int b, string a = "")
{
    cout << a << b << endl;
}

void display(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl; // To move to the next line after printing the array
}

int indinsert(int arr[], int size, int element, int index, int capacity)
{
   if (size >= capacity)
   {
       funcout(1, "Error! Array is full: ");
       return -1;
   }
   else
   {
       for (int i = size-1; i >= index; i--)
       {
           arr[i+1] = arr[i];
       }
       arr[index] = element;
       return 1;
   }
}

int main()
{
    int arr[20] = {7, 8, 12, 25, 55};
    int size = 5, element = 45, index = 5, capacity = 20;

    if (indinsert(arr, size, element, index, capacity) == 1)
    {
        size++;
    display(arr, size);
    }
    

    return 0;
}
