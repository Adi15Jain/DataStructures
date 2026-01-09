// 7. To count even and odd elements in an array.

#include <iostream>
using namespace std;

int main () {
    int arr[100], n, even = 0, odd = 0;

    cout << "Enter the number of elements in the array: " << endl;
    cin >> n;

    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
    
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd;

    return 0;
}