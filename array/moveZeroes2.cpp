//Fails When NEGATIVE NUMBER INPUT


#include<iostream>
using namespace std;

void moveZero(int arr[], int n){
  int zero=0;
  int s=0;
  int e=n-1;
  for (int j=0;j<n;j++){
    if(arr[j]>0){
      swap(arr[j],arr[s]);
      s++;
    //   nonzero++; 
    }
    
  }
}

void printArray(int ans[],int n){
  for(int i=0;i<n;i++){
    cout<<ans[i]<<" ";  
  }
}

int main(){
  int arr[10]={1,0,2,3,0,0,0,9,6,0};

  moveZero(arr,10);

  printArray(arr, 10);





  return 0;
}