#include<iostream>
using namespace std;


class complex{
    int a,b;
    public:
    void printnum(){
        cout<<"Your Number is "<<a<< " +" << b << "i"<< endl;
    }
    complex(void);
};
complex::complex(void){
    a=20;
    b=5;

};


int main(){
    complex c;
    c.printnum();
return 0;
}
