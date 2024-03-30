#include <iostream>
using namespace std;

void print_array(int arr[],int n){
    cout<<endl;
    for(int i=0 ; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void reverse_array(int arr[],int n){

    int start=0;
    int end=n-1;

    while (start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

}



int main()
{
    int arr[5]={2,5,7,6,9};
    int brr[6]={7,5,6,4,2,3};


    print_array(arr,5);
    print_array(brr,6);


    reverse_array(arr,5);
    reverse_array(brr,6);


    print_array(arr,5);
    print_array(brr,6);
    
    return 0;
}
