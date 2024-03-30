#include <iostream>
using namespace std;

int fibonacci(int n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }

    //recursive relation
    int ans=fibonacci(n-1) + fibonacci(n-2);
    
    return ans;
}

int main()
{
    int x;
    cin>>x;
    int ans1=fibonacci(x);
    cout<<ans1;

    return 0;
}
