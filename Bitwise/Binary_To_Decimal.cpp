#include <iostream>
#include <string>
using namespace std;

int main() {
    string binary;
    cout << "Enter binary number (0s and 1s only): ";
    cin >> binary;
    
    int ans = 0;
    int place = 1;
    
    // Process from right to left
    for(int i = binary.length() - 1; i >= 0; i--) {
        if(binary[i] == '1') {
            ans += place;
        } else if(binary[i] != '0') {
            cout << "Invalid binary number!" << endl;
            return 1;
        }
        place *= 2;
    }
    
    cout << "Decimal value: " << ans << endl;
    return 0;
}