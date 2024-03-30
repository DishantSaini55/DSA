#include <iostream>
using namespace std;

void bubbleSort(int arr[],int size){
    if(size==0 || size==1){
        return ;
    }
    
    for(int i=0;i<size;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bubbleSort(arr,size-1);
}

int main()
{
    int arr[10]={1,5,3,2,0,99,100,45,33,64};
    // int size=5;

    bubbleSort(arr,10);
    
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" "<<endl;
    }cout<<endl;

    
    return 0;
}
