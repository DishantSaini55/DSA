#include<iostream>
using namespace std;



class employee{
    int id;
    int salary;
    public:
        void set_id(void){
            salary=150;
            cout<<"Enter th employee id"<<endl;
            cin>>id;
        }
        void get_id(void){
            cout<<"The employee id is  "<<id<<endl;
        }
};

int main(){
employee dishant,bhuwan;
dishant.set_id();
dishant.get_id();

return 0;
}