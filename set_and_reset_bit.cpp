#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    for(int i = 0; i < 32; i++) {
        if(num & (1 << i)) {
            cout << "Bit " << i << " is set." << endl;
        } else {
            cout << "Bit " << i << " is reset." << endl;
        }
    }

    return 0;
}




