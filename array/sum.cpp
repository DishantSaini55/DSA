#include <iostream>
using namespace std;

int sumi(int array[],int n)
    {
    // base case
    if (n == 0) {
        return 0;
    }
    else {
        // recursively calling the function
        return array[0] + sumi(array + 1, n - 1);
    }
}

int main()
{
    int z=5;
    int dishant[5];
    int n = sizeof(dishant) / sizeof(dishant[0]);
    for(int i=0;i<z;i++){
        cin>>dishant[i];
    }

    cout<<"sum of the all elements in these array are  "<<sumi(dishant,n);


    return 0;
}

