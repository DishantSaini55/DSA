#include <iostream>
using namespace std;


int get_min(int array[],int n){

    int min =INT_MAX;
    for(int i=0 ; i<n; i++){
        if (array[i]< min){
            min=array[i];
        }
    }

    return min;
}

int get_max(int array[],int n){

    int max =INT_MIN;
    for(int i=0 ; i<n; i++){
        if (array[i]> max){
            max=array[i];
        }
    }

    return max;
}
int Get_max(int array[],int n){

    int maxi =INT_MIN;
    for(int i=0 ; i<n; i++){
        maxi=max(maxi,array[i]);
        // if (array[i]> max){
        //     max=array[i];
        // }
    
    }
    return maxi;
}


int main()

{
    int size;
    cin>>size;

    int Array[1000];
    for(int i=0 ; i<size ; i++){
        cin>>Array[i];
    }


    cout<<"Maximum Number in this array is "<<get_max(Array,size)<<endl;
    cout<<"Maximum Number in this array is "<<Get_max(Array,size)<<endl;
    cout<<"Minimum Number in this array is "<<get_min(Array,size)<<endl;

    return 0;
}
