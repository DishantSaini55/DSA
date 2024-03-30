#include <iostream>
using namespace std;


void print_array(int arr[],int n){
    for(int i=0 ; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


void swap_array(int arr[],int n){   
    for(int i=0; i<n ; i=i+2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }

}
int main()
{
    int arr[6]={2,6,8,10,12,14};
    int brr[5]={9,8,7,6,5};


    print_array(arr,6);
    
    swap_array(arr,6);
    
    print_array(arr,6);
    ////////////////////////////////////////////////////////////
    
    print_array(brr,5);
    
    swap_array(brr,5);
    
    print_array(brr,5);
    
    return 0;
}
