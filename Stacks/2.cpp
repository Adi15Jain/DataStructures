#include <iostream>
using namespace std;

int main() {

    int st[100], top = -1, arr[100], n;

    cout << "Enter the number of elements in the array: " << endl;
    cin >> n;

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        st[++top] = arr[i];
    }

    for (int i = 0; i < n; i++) {
        arr[i] = st[top--];
    }
    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) { 
        cout << arr[i] << " ";
    }

    return 0;
}
