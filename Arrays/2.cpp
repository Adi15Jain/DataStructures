// Insert element at a specific position in an array

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[100];
    cout << endl;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Your Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int ele;
    cout << "Enter the element to be inserted in the array: ";
    cin >> ele;

    int pos;
    cout << "Enter the position in which the element is to be inserted: ";
    cin >> pos;
    pos--;

    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = ele;
    n++;

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}