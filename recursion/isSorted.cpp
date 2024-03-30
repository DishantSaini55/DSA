#include <iostream>
using namespace std;

bool isSorted(int arr[],int size){
    if(size==0||size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool ans=isSorted(arr+1,size-1);
        return ans;
    }
    
    
}
int main()
{
    int arr[6]={1,3,4,7,9,5};
    int size=6;
    bool ans= isSorted(arr,size);

    if(ans){
        cout<<"array is sorted"<<endl;
    }
    else{
        cout<<"array is not sorted"<<endl;
    }
    return 0;
}
