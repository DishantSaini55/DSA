/*For each integer  in the inclusive interval :

If , then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
Else if  and it is an even number, then print "even".
Else if  and it is an odd number, then print "odd". */




#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    for (int i=8 ;i<10;i++)                       
        
        if (i % 2 == 0)  {
        
        cout<<"even"<<endl;
        }
         else {
            // Action for odd numbers
            cout<< " odd." <<endl;
        }
cout<<("eight")<<endl;
    
    return 0;
}