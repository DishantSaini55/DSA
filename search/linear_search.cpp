#include <iostream>
using namespace std;

bool search(int arr[],int size,int key){
    for(int i=0; i<size ; i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;

}

int main()
{
    int arr[5]={-2,-5,5,99,4};
    cout<<"enter the element you want to enter"<<endl;
    int key;
    cin>>key;

    bool found = search(arr,5,key);
    if (found){
        cout<<"Key is present"<<endl;
    }
    else{
        cout<<"KEy is Not Present"<<endl;
    }
    return 0;
}
