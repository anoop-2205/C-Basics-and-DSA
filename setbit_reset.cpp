

#include<iostream>
using namespace std;

int countSetBits(int n){
    int count = 0;
    while(n){
        count = count + n & 1;
        n >>= 1;
    }
    return count;
}

int countResetBits(int n){
    return (sizeof(n) * 8) - countSetBits(n);
}

int main(){
    int a, b;

    cout<<"Enter the values of a and b: ";
    cin>>a>>b;

    int setBitsA = countSetBits(a);
    int resetBitsA = countResetBits(a);
    int setBitsB = countSetBits(b);
    int resetBitsB = countResetBits(b);

    cout<<"Total set bits in a: "<<setBitsA<<endl;
    cout<<"Total reset bits in a: "<<resetBitsA<<endl;
    cout<<"Total set bits in b: "<<setBitsB<<endl;
    cout<<"Total reset bits in b: "<<resetBitsB<<endl;

    return 0;
}

#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int setBits = 0, resetBits = 0;
    for(int i = 0; i < 32; i++) {
        if(n & (1 << i)) {
            setBits++;
        } else {
            resetBits++;
        }
    }

    cout << "Number of set bits: " << setBits << endl;
    cout << "Number of reset bits: " << resetBits << endl;

    return 0;
}
