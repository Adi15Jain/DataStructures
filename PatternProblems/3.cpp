// 3. To print a full pyramid upto a given number.

#include <iostream>
using namespace std;

int main () {
    int x;
    cout << "Enter the value upto which the pyramid is to be built: ";
    cin >> x;

    for (int i = 0; i < x; i++) {
        for (int s = 1; s < x - i; s++) {
            cout << " ";
        }
        for (int j = 0; j < 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}