#include <iostream>
using namespace std;

int powerRecursion(int a,int b){
    if(b==0){
        return 1;
    }
    //even
    if(b==1){
        return a;
    }
    //recusive call
    int ans=powerRecursion(a,b/2);
    if((b%2)==0){
        return ans*ans;
    }
    else{
        return a*ans*ans;
    }
}

int main()
{
    int a;
    cin>>a;
    int b;
    cin>>b;
    int ans=powerRecursion(a,b);
    cout<<ans<<endl;
    return 0;
}
