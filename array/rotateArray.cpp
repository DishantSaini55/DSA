#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<int>&nums, int k){
    vector<int> temp(nums.size());
    for (int i=0;i<nums.size();i++){
        temp[(i+k)%nums.size()]=nums[i];
        }

        nums=temp;
    
    }


void printVector(vector<int>& vector) {
    cout << "Elements of the vector: ";
    for (int i = 0; i < vector.size(); i++) {
        cout << vector[i] << " ";
    }
    cout << endl;
}

int main(){
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(7);
    nums.push_back(9);
    nums.push_back(11);
  
    
    rotate(nums,2);
    printVector(nums);





  return 0;
}