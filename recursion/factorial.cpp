#include<iostream> 
using namespace std;

int factorial(int n) {
    
    //base case
    if(n==0)
        return 1;

    int smallerProblem = factorial(n-1);   
    int biggerProblem = n * smallerProblem;

    return biggerProblem;
}

int factorial2(int n) {
    
    //base case
    if(n==0)
        return 1;
  
    int fact = n * factorial(n-1);

    return fact;
}


int main() {

    int n;
    cin >> n;

    int ans = factorial(n);
    int ans1 = factorial2(n);

    cout << ans << endl;
    cout << ans1 << endl;

    return 0;
}