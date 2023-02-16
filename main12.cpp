#include <iostream>
using namespace std;

int main() {
    int A[8];
    int maxOddPositive = -1;

    cout << "Enter 8 integers for the array:" << endl;
    for (int i = 0; i < 8; i++) {
        cin >> A[i];
    }

    for (int i = 1; i < 8; i += 2) {
        if (A[i] > 0 && (maxOddPositive == -1 || A[i] > maxOddPositive)) {
            maxOddPositive = A[i];
        }
    }

    if (maxOddPositive == -1) {
        cout << "There are no positive elements on odd positions in the array." << endl;
    } else {
        cout << "The greatest positive element on odd positions is " << maxOddPositive << "." << endl;
    }

    return 0;
}
