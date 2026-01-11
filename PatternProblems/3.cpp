// 3. To print a full pyramid upto a given number.

#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter the value upto which the pyramid is to be built: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int s = 1; s < n - i; s++) {
            cout << " ";
        }
        for (int j = 0; j < 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}