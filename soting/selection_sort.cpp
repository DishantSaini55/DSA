#include <iostream>
using namespace std;


void printArray(int arr[], int size) {

    for(int i =0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;
}

void selection_sort(int arr[],int n){

    for(int i=0 ; i<n-1 ; i++){

        int Min_index=i;
        
        for(int j=i+1 ; j<n ; j++){

            if(arr[j]<arr[Min_index]){

                Min_index=j;
            }
        }
        swap(arr[Min_index],arr[i]);
    }
}

int main()
{
    int array[6]={10,50,40,30,80,5};
    printArray(array,6);
    
    selection_sort(array,6);
    
    printArray(array,6);
    return 0;
}
