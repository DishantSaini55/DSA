#include<iostream>
using namespace std;

int sum(int a,int b){
    int c=a+b;
    return c;
}

int main(){
    int num1,num2;
    cout<<"ENTER THE FIRST NUMBER: "<<endl;
    cin>>num1;
    cout<<"ENTER THE SECOND NUMBER: "<<endl;
    
    cin>>num2;
    cout<<"THE SUM IS : "<<sum(num1,num2)<<endl;
    return 0;
}