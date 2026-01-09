// 8. To find the sum and average of array elements.

#include <iostream>
using namespace std;

int main () {

    int arr[100], n, sum = 0; 
    float average;

    cout << "Enter the number of elements in the array: " << endl;
    cin >> n;

    cout << "Enter the elements of the array: " << endl; 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    average = (float)sum / n;
    
    cout << "Sum of the elements: " << sum << endl;
    cout << "Average of the elements: " << average;

    return 0;
}