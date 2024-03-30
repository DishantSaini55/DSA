#include <iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int sumArray(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;

}
int main()
{
    int n;
    cin>>n;
    int *arr=new int[n];  //Dynamic Array With N Size

    //taking input
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }


    printArray(arr,n);
    int ans=sumArray(arr,n);
    cout<<"Sum is "<<ans;
    return 0;
}
