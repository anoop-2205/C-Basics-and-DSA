#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int numSetBits = 0;
    int numResetBits = 0;
    int binaryNum[32];
    int i = 0;
    while(n > 0) {
        if(n & 1) {
            numSetBits++;
            binaryNum[i] = 1;
        } else {
            numResetBits++;
            binaryNum[i] = 0;
        }
        n >>= 1;
        i++;
    }

    cout << "Total number of set bits: " << numSetBits << endl;
    cout << "Total number of reset bits: " << numResetBits << endl;
    cout << "Binary representation: ";
    for(int j = i - 1; j >= 0; j--) {
        cout << binaryNum[j];
    }
    cout << endl;

    return 0;
}
