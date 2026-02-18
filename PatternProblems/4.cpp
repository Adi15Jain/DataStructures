// 4. To print a reapeated number triangle.

#include <iostream>
using namespace std;

int main () {
    int x;
    cout << "Enter number upto which triangle is to be made: ";
    cin >> x;

    for (int i = 1; i <= x; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i;
        }
        cout << endl;
    }

    return 0;
}