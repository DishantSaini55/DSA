#include <iostream>
using namespace std;

bool pallindrome(string str,int i,int j){
    if(i>j){
        return true;
    }
    if(str[i]!=str[j]){
        
        return false;
    }
    else{
        return pallindrome(str,i+1,j-1);
    }
}

int main()
{
    string name="aacbbcc
    aa";
    bool ans=pallindrome(name,0,name.length()-1);
    // cout<<name<<" "<<endl;

    if(ans){
        cout<<"is pallindrome"<<endl;
    }
    else{
        cout<<"is not pallindrome"<<endl;
    }
    return 0;
    return 0;
}


