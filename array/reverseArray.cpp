#include <iostream>
using namespace std;

void reverseArray(int arr[], int n) {
  int s = 0;
  int e = n - 1;

  while (s <= e) {
    swap(arr[s], arr[e]);
    s++;
    e--;
  }
}

void printArray(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout<<endl;
}

int main() {
  int arr[5] = {11, 5, 6, 8, 9};


  cout<<"before reversing"<<endl;
  cout<<endl;
  printArray(arr, 5);

  reverseArray(arr, 5);
  cout<<endl;
  cout<<"after reversing"<<endl;
  cout<<endl;
  printArray(arr, 5);
  // cout << "after reversing array" << printArray(arr, 5) << endl;

  return 0;
}