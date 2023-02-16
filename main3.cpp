#include <iostream>
using namespace std;

int main() {
    int A[7];
    int min = A[0];

    cout << "Enter 7 array elements: ";
    for (int i = 0; i < 7; i++) {
        cin >> A[i];
    }

    for (int i = 1; i < 7; i += 2) {
        if (A[i] < min) {
            min = A[i];
        }
    }

    cout << "Minimum element among odd positions: " << min << endl;

    return 0;
}
