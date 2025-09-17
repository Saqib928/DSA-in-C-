#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long n;
    cin >> n;

    if (n == 2 || n == 3) {
        cout << "NO SOLUTION" << endl;
    } else {
        // First print even numbers
        for (long i = 2; i <= n; i += 2) {
            cout << i << " ";
        }
        // Then print odd numbers
        for (long i = 1; i <= n; i += 2) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}