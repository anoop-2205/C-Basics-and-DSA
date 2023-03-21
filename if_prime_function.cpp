#include<iostream>
using namespace std;

bool isprime(){
    int n;
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){

    cout<<"Enter the number to check where the prime or not ";
    if(isprime()){
        cout<<"It is prime number"<<endl;
    }
    else
        cout<<" It is not prime number"<<endl;
    return 0;

}