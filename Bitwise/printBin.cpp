#include<bits/stdc++.h>
using namespace std;

void stringToBinary(string s) {
    for(char c : s) {
        for(int i = 7; i >= 0; i--) {
            cout << ((c >> i) & 1);
        }
        cout << " ";
    }
    cout << endl;
}

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    cout << "Binary representation: ";
    stringToBinary(s);
    return 0;
}