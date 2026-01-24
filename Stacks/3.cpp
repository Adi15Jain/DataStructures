#include <iostream>
using namespace std;

int main () {
    
    char st[100];
    int top = -1, n;
    bool valid = true;

    cout << "Enter the number of elements in the array: " << endl;
    cin >> n;

    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> st[i];
    }

    for (int i = 0; st[i]; i++) {
        if (st[i] == '(')
            st[++top] = '(';
        else if (st[i] == ')') {
            if (top == -1) {
                valid = false;
                break;
            }
            top--;
        }
    }
    if (top != -1) valid = false;
    cout << (valid ? "Balanced" : "Not Balanced");

    return 0;
}