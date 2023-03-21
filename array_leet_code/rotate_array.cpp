#include <iostream>
#include <vector>

using namespace std;

void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    cout<<nums.size();
    vector<int> temp(n);
      
    for(int i =0;i<n;i++) {
        temp[(i+k)%n] = nums[i];
    }
      
    for(int i=0;i<nums.size();i++) {
        nums[i] = temp[i];
    }
}

int main() {
    vector<int> nums = {1,2,3,4,5,6,7};
    int k = 3;
    
    rotate(nums, k);

    cout<<endl;
   
    
    cout << "Rotated array: ";
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

     cout<<endl;
    
    

    
    return 0;
}









