// 4. To search an element in an array (Linear Search).

#include <iostream>
using namespace std;

int main() {
    int arr[100], n, key, pos;
    int found;
    
    cout << "Enter the number of elements in the array: " << endl;
    cin >> n;

    cout << "Enter the elements of the array: " << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Enter the element to be searched in the array: ";
    cin >> key;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            pos = i + 1;
            cout << "Element found at position: " << pos;
            found = 1;
            break;
        }
    }
    if (!found) {
        cout << "Element not found";
    }

    return 0;
}