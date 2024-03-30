#include <iostream>
#include <cstring>
using namespace std;

class Hero{

    public:
    int Health;
    string Level;

    void setLevel(string L){
        Level=L;
    }

    void setHealth(int H){
        Health=H;
    }

    string getLevel(){
        return Level;
    }
 
    int getHealth(){
        return Health;
    }
 

};

int main()
{
        //static allocation
    Hero a;
    a.setHealth(80);
    a.setLevel("B");
    cout<<endl;
    cout << "level is  " << a.Level << endl;
    cout<<endl;
    cout << "health is " << a.getHealth() << endl;
    cout<<endl;
    //dynamicallly
    Hero *b = new Hero;
    b->setLevel("A"); 
    b->setHealth(70);
    cout << "level is  " << (*b).Level << endl;
    cout<<endl;
    cout << " health is " << (*b).getHealth() << endl;
    cout<<endl;


    cout << "level is  " << b->Level << endl;
    cout<<endl;
    cout << " health is " << b->getHealth() << endl;
    cout<<endl;
    return 0;
}
