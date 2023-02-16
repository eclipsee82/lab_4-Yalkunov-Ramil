#include <iostream>
using namespace std;

int main() {
    int A[7];
    int max = INT_MIN;

    cout << "Enter 7 integers for the array:" << endl;
    for (int i = 0; i < 7; i++) {
        cin >> A[i];
    }

    for (int i = 1; i < 7; i += 2) {
        if (A[i] > max) {
            max = A[i];
        }
    }

    if (max != INT_MIN) {
        cout << "The greatest element on the odd positions is " << max << endl;
    } else {
        cout << "There are no odd positions in the array." << endl;
    }

    return 0;
}
