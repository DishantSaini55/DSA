#include <iostream>
using namespace std;

void sayDigit(string arr[],int n){
    if(n==0){
        return ;
    }

    //processing
    int digit=n % 10;
    n= n / 10;

    

    //recursive call
    sayDigit(arr,n);
    cout<<arr[digit]<<" ";

}

int main()
{
    string arr[10]={"zero","one","two","three",
    "four","Five","Six","seven","eight","nine"};
    int n;
    cin>>n;

    sayDigit(arr,n);
    
    
    
    return 0;
}
