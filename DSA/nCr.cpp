#include<iostream>
using namespace std;

int factorial(int a){
    int fact =1;
    
    for(int i=1;i<=a;i++){
        fact=fact*i;
    }
    return fact;
        
    }
int nCr(int num1,int num2){
    int num= factorial(num1);
    int deno= factorial(num2)*factorial(num1-num2);

    int answer= num/deno;
    return answer;
    
}

int main(){
    // cout<<"factorial is  "<<factorial(4)<<endl;
    cout<<"nCr is  "<<nCr(5,2)<<endl;

return 0;
}