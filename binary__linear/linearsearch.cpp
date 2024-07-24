#include <iostream>
using namespace std;

int funcout(int b, string a = "") {  // You can modify this function as discussed earlier
  cout << a << b << endl;
  return 0; // Assuming funcout doesn't need a return value
}

int linearsearch(int arr[], int size, int element) {
  for (int i = 0; i < size; i++) {  // Fixed loop condition
    if (arr[i] == element) {
      return i;
    }
  }
  return -1; // Element not found
}

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
  int size = sizeof(arr) / sizeof(int);

  int element = 5;
  int result = linearsearch(arr, size, element);
  cout << result << endl;

  return 0;
}
