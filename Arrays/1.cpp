// 1. Simple array printing and user input array

#include <iostream>
using namespace std;

int main () {
    
    // simple array printing
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for(int i = 0; i <= 9; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // User input array:
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int userArray[100];
    cout << endl;
    for (int i = 0; i < n; i++){
        cin >> userArray[i];
    }
    cout << "Your Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << userArray[i] << " ";
    }

    return 0;
}