#include <iostream>
using namespace std;

int sumArray(int arr[],int size){
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    
    int remainingPart = sumArray(arr+1, size-1);
    int sum = arr[0] + remainingPart;
    return sum;
} 
int main()
{
    int arr[5]={1,3,4,7,9};
    int size=5;
    int ans= sumArray(arr,size);
    cout<<"the sum is "<<ans<<endl;

    
    return 0;
}
