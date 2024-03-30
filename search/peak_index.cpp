#include <iostream>
using namespace std;


int peak_index(int arr[],int size){

    int start=0;
    int end=size-1;

    int mid= mid+(end-start)/2;

    while(start<=end){
        if (arr[mid]<arr[mid+1]){
            start=mid+1;
        }
        else if(arr[mid]>arr[mid+1]){
            end=mid-1;
        }
        else{
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return start;
}

int main()
{
    int array[5]={1,2,6,5,1};
    int peak=peak_index(array,5);
    cout<<"peak index of this array is "<<peak_index(array,5)<<endl;
    cout<<"peak value is "<<array[peak]<<endl;
    return 0;
}
