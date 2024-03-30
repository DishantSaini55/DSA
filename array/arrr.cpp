#include <iostream>
using namespace std;

void print_array(int array[],int size){
    for (int i=0;i<size;i++){
        cout<<array[i]<<endl;
    }
    cout<<"printing of array";
}


int main()
{
    int dishant[5]={2,3,4,5,6};
    // cout<<"the number at position at 5 is:- "<<dishant[1]<<endl;
    print_array(dishant,10);
    return 0;
}
