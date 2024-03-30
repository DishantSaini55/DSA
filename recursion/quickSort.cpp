#include <iostream>
using namespace std;

int partition(int arr[],int s, int e){

    int pivot=arr[s];

    int count=0;

    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    //place pivot at right condition
    int pivotIndex=s+count;
    swap(arr[pivotIndex],arr[s]);


    //left and right wala part sambhalna h 
    int i=s,j=e;

    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }

        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i],arr[j]);
            i++;
            j--;

        }
    }
    return pivotIndex;
}
void print_array(int arr[],int n){
    cout<<endl;
    for(int i=0 ; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


void QuickSort(int arr[],int s,int e){
    //base case
    if(s>=e){
        return;
    }
    //partition

    int p=partition(arr,s,e);

    //left part sort karenge 
    QuickSort(arr,s,p-1);

    //right part k liye
    QuickSort(arr,p+1,e);
}

int main()
{
    int arr[4]={50,30,70,40};
    int size=4;
    print_array(arr,4);

    cout<<endl;

    QuickSort(arr,0,size-1);
    cout<<"after sorting"<<endl;

    print_array(arr,4);
    return 0;
}
