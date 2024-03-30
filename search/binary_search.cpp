#include <iostream>
using namespace std;
// binary search bas monoyous function k liye hi lagegi matlab ya to 
// increasing ya to decreasing....

int binary_search(int arr[],int size,int key){

    int start=0;
    int end=size-1;

    int mid=start+(end-start)/2;       //mid=(start+end)/2

    while (start<=end){
        if (arr[mid]==key ){
            return mid;
        }

        if(key>arr[mid]){
            start=mid+1;

        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;    //mid=(start+end)/2
    }
    return -1;
}


int main()
{

    int even[6]={2,4,6,8,10,12};
    int odd[5]={3,6,9,12,15};
    
    int evenIndex=binary_search(even,6,4);
    cout<<"index of element 4 is  "<<evenIndex<<endl;

    
    int oddIndex=binary_search(odd,5,3);
    
    cout<<"index of element  is 3  "<<oddIndex<<endl;
    
    return 0;
}
