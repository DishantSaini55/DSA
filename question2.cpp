//#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 
int main(){
long long n;
cin>>n;
 
int sum = n*(n+1)/2;
int input_sum=0;
 
for(int i=0;i<n-1;i++){
    int number;
    cin>>number;
    input_sum+=number;
}
 
cout<<sum-input_sum<<endl;

}