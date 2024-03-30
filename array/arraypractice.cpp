#include<format>
#include<iostream>

using namespace std;

int main(){
    int marks[]={23,24,25,26};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    int* p=marks;
    // cout<<*(p++)<<endl;

    for(int i = 0 ;i <= 5 ; i ++){
        std::string formatted = std::format("The value of marks[{}]: {}" , i , *p+i);
        cout<< formatted;
    }
    cout<<"the value of marks[0]:"<<*p<<endl;
    cout<<"the value of marks[1]:"<<*p+1<<endl;
    cout<<"the value of marks[2]:"<<*p+2<<endl;
    cout<<"the value of marks[3]:"<<*p+3<<endl;

    return 0;
}