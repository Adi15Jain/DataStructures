// 5. To print Floyd's Triangle 
//    1
//    2 3
//    4 5 6
//    7 8 9 10

#include <iostream>
using namespace std;

int main () {
    int n, num = 1;

    cout << "Enter number upto which triangle is to be printed: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << num++ << " ";
        }
        cout << endl;
    }

    return 0;
}