#include<iostream> 
using namespace std;
int anyPower(int x,int y){
    int ans;
    if(y==0){
        return 1;
    }
    else if(y<0){
        return 1/ x* anyPower(x,y-1);
    }
    else{
        return x * anyPower(x, y - 1);
    }
}
int power(int n) {

    //base case 
    if(n == 0)
        return 1;

    //recursive relation
    return 2 * power(n-1);    
}

int main() {

    int n;
    cin >> n;
    int x;
    cin>>x;
    int y;
    cin>>y;

    int ans = power(n);
    int ans1 = anyPower(x,y);

    cout << ans << endl;
    cout << ans1 << endl;

    return 0;
}