// To print a simple star pattern

#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter value upto which star pattern is to be printed: " << endl;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j > n - i - 1; j++) {
            cout << "*" << endl;
        }
    }
    return 0;
}