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

int inddeletion(int arr[], int size, int index)
{
    if (index >= size)
    {
        funcout(1, "Error! Array is full: ");
        return -1;
    }
    else
    {
        for (int i = index; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        return 1;
    }
}

int main()
{
    int arr[20] = {7, 8, 12, 25, 55};
    int size = 5, index = 2;

    if (inddeletion(arr, size, index) != -1)
    {
        size--;
        display(arr, size);
    }

    return 0;
}
