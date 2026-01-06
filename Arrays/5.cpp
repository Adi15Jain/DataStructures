// 5. To find the largest and smallest element in an array.

#include <iostream>
using namespace std;

int main () {

    int arr[100], n;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    cout << "Enter the elements of the array: ";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    } 

    int max = arr[0], min = arr[0];

    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    cout << "Maximum element in the array: " << max << endl;
    cout << "Minimum element in the array: " << min << endl;

    return 0;
}