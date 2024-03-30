#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    void printnum(){
        cout<<"Your Number is "<<a<< " +" << b << "i"<< endl;
    }
    complex(int,int);
    complex(int x){
        a= x;
        b= 0;
    }

};
complex::complex(int x,int y){
    a=x;
    b=y;
   
};
int main(){
    // implicit call
    complex a(4,6);
    a.printnum();

    // explicit call
    complex b= complex(5,9);
    b.printnum();

    complex c(5);
    c.printnum();
return 0;
}