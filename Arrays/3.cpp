// To delete the specific element in an array.

#include <iostream>
using namespace std; 

int main() {
    int arr[100];
    int n, element;
    int pos =- 1;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element to be deleted: ";
    cin >> element;

    for(int i = 0; i < n; i++) {
        if (arr[i] == element){
            pos = i;
            break;
        }
    }
    if (pos != -1) {
        for (int i = pos; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;

        cout << "Array after deletion: ";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
    } else {
        cout << "Element not found";
    }
    return 0;
}