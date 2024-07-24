#include <iostream>
using namespace std;

void funcout(int b, string a = "") {
  // You can modify this function as discussed earlier
  cout << a << b << endl;
}

int binarysearch(int arr[], int size, int element) {
  int low = 0;
  int high = size - 1;

  while (low <= high) {
    int mid = low + (high - low) / 2; // Calculation of mid inside the loop

    if (arr[mid] == element) {
      return mid;
    }
    if (arr[mid] < element) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  return -1;
}

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
  int size = sizeof(arr) / sizeof(int);
  int element = 8;

  int result = binarysearch(arr, size, element);
  cout << result << endl;

  return 0;
}
