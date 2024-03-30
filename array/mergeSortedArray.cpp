#include<iostream>
using namespace std;


void mergeSortedarray(int arr1[], int n, int arr2[], int m, int arr3[]){
  int i=0;
  int j=0;
  int k=0;
  while(i<n && j<m){
    if(arr1[i]<arr2[j]){
        arr3[k]=arr1[i];
        k++;
        i++;
    }
    else{
        arr3[k]=arr2[j];
        k++;
        j++;
    }
  }
  while(i<n){
    arr3[k]=arr1[i];
    k++;
    i++;
  }
  while(j<m){
    arr3[k]=arr2[j];
    k++;
    j++;
  }
}



void printArray(int ans[],int n){
  for(int i=0;i<n;i++){
    cout<<ans[i]<<" ";  
  }
}


int main(){
  int arr1[5]={1,4,6,9,11};
  int arr2[4]={2,3,5,8};
  int arr3[9]={0};

  mergeSortedarray(arr1,5,arr2,4,arr3);

  cout<<"printing the array"<<endl;
  
  printArray(arr3,9);
  
  return 0;
}