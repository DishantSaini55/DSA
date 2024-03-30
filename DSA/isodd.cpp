#include<iostream>
using namespace std;

bool isOdd(int a){
    if (a&1){
        return 1;  //odd
    }
    else{
        return 0;   //even
    }

}

int main(){
    int num;
    cin>>num;

    if(isOdd(num)){
        cout<<"Number is odd"<<endl;
    }
        else{
            cout<<"Number is even"<<endl;
        }

    

    return 0;
}