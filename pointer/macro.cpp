#include <iostream>
using namespace std;
// default argument
void print(int arr[], int n  , int start = 0) {

    for(int i = start; i<n; i++) {
        cout << arr[i] << endl;
    }

}
// inline function
inline int getMax(int& a, int& b) {
    return (a>b) ? a : b;
}

#define PI 3.14
int main()
{
    int r=5;
    // int pi=3.14;
    double area= PI*r*r;
    cout<<area;
 


// default argument
    int arr[5] = {1,4,7,8,9};
    int size = 5;
    cout << endl;
    print(arr, size);
    cout << endl;
    print(arr, size, 2);


//inline function
    int a = 1, b = 2;
    int ans = 0; 
    cout << endl;
    ans = getMax(a,b);
    cout << ans << endl;
    cout << endl;
    a = a + 3;
    b = b + 1;

    ans = getMax(a,b);
    cout << ans << endl;
    cout << endl;
    
    return 0;
}


