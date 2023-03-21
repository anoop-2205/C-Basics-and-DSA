#include<iostream>                              
using namespace std;

int n;
int arth_mean(){
    int mean;
    cin>>n;
    mean=(3*n)+7;
    return mean;
}
int main(){
 cout<<"Enter the value of n: ";    
cout<<"The "<<n<<"th term of the given A.P is "<< arth_mean();
}



 