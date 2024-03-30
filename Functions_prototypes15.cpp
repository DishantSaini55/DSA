#include<iostream>
using namespace std;


// Function prototype
    int sum(int a, int b);
    void g();

int main(){
    int num1,num2;
    cout<<"ENTER THE FIRST NUMBER: "<<endl;
    cin>>num1;
    cout<<"ENTER THE SECOND NUMBER: "<<endl;
    
    cin>>num2;
    cout<<"THE SUM IS : "<<sum(num1,num2)<<endl;
    g();


    
    return 0;
}


int sum(int a,int b){
    int c=a+b;
    return c;
}

void g(){
    cout<<"\nHello, Good Morning";
}
//BASICALLY FUNCTION PROTOTYPE H KI AGAR HUMNE JO FUNCTION BANAYA VO MAIN FUCTION KAIN UPAR KAIN 
//JAGAH NICHE BANA DIYA TO BHI VO RUN HO JAYEGA BAS HAMME UPAR YEAH LIKHNA HOGA 



//type function-name(arguments);
//for example----> int sum(int a, int b);
