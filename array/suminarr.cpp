#include<iostream>
using namespace std;

int main() {
    cout<<" Enter the size of array : ";
    int n ;
    cin>>n;
    
    int arr[100];
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
   
    
    int sum = 0;
    for(int i=0; i<n; i++) {
    sum += arr[i];
    }
    
    cout << "The sum of the array is: " << sum << endl;
    
    return 0;
}