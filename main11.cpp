#include <iostream>
using namespace std;

int main() {
    int A[14];
    int minPositive = -1;
    int maxOddPositive = -1;
    int minPositiveIndex = -1;
    int maxOddPositiveIndex = -1;

    cout << "Enter 14 integers for the array:" << endl;
    for (int i = 0; i < 14; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < 14; i++) {
        if (A[i] > 0 && (minPositive == -1 || A[i] < minPositive)) {
            minPositive = A[i];
            minPositiveIndex = i;
        }
        if (A[i] > 0 && A[i] % 2 == 1 && (maxOddPositive == -1 || A[i] > maxOddPositive)) {
            maxOddPositive = A[i];
            maxOddPositiveIndex = i;
        }
    }

    if (minPositiveIndex == -1) {
        cout << "There are no positive elements in the array." << endl;
    } else {
        cout << "The smallest positive element is " << minPositive << " at position " << minPositiveIndex << "." << endl;
    }

    if (maxOddPositiveIndex == -1) {
        cout << "There are no odd positive elements in the array." << endl;
    } else {
        cout << "The greatest odd positive element is " << maxOddPositive << " at position " << maxOddPositiveIndex << "." << endl;
    }

    return 0;
}
