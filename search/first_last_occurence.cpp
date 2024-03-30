#include <iostream>
using namespace std;


int first_occurence(int arr[],int size,int key){

    int start=0;
    int end=size-1;

    int mid = start+(end-start)/2;
    int ans=-1;

    while(start<=end){
        if (arr[mid]==key){
            ans=mid;
            end=mid-1;
        }

        else if(key>arr[mid]){    //right m jana h 

            start=mid+1;   
        } 
        else if(key<arr[mid]){   //left m jaana h 
            end=mid-1;
        }
    
        
        mid =start+(end-start)/2;

    }
        
    return ans;
}





int last_occurence(int arr[],int size,int key){

    int start=0;
    int end=size-1;

    int mid = start+(end-start)/2;
    int ans=-1;

    while(start<=end){
        if (arr[mid]==key){
            ans=mid;
            start=mid+1;
        }

        else if(key>arr[mid]){    //right m jana h 

            start=mid+1;   
        } 
        else if(key<arr[mid]){   //left m jaana h 
            end=mid-1;
        }
    
        
        mid =start+(end-start)/2;

    }
        
    return ans;
}


// int total_occurance(int arr[],int size , int key){
//     int p=(ans2-ans1)+1;
//     return p;
// }
// one more method to print in a pair 

// pair<int,int> position (int arr[],int size, int key){
//     pair<int,int> p;
//     p.first=first_occurence(arr,size,key);
//     p.second=last_occurence(arr,size,key);
//     return p;
// }


// yeah ek tarikka aur h pair m print karwane ka 

int main()
{
    int array[10]={0,1,1,5,5,4,9,10,10,10};

    cout<<"The First occurence of the 1 is "<<first_occurence(array,10,1)<<endl;
    cout<<"The First occurence of the 5 is "<<first_occurence(array,10,5)<<endl;
    cout<<"The First occurence of the 10 is "<<first_occurence(array,10,10)<<endl;
    cout<<"The last occurence of the 1 is "<<last_occurence(array,10,1)<<endl;
    cout<<"The last occurence of the 5 is "<<last_occurence(array,10,5)<<endl;
    cout<<"The last occurence of the 10 is "<<last_occurence(array,10,10)<<endl;
    
    
    
    
    
    // cout<<"The total occurence of the 10 is "<<total_occurance(array,10,10)<<endl;


    int p=last_occurence(array,10,10);
    int p1=first_occurence(array,10,10);
    
    int p2=(p-p1)+1;

    cout<<"The total occurence of the 10 is "<<p2<<endl;


    
    return 0;
}




// total no of occurance = (last index-first index )+1

