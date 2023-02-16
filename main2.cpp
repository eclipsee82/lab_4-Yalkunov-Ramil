#include <iostream>
using namespace std;

int main() {
    int A[8];
    int min = A[0];
    int max = A[0];
    int minIndex, maxIndex;

    cout << "Enter 8 array elements: ";
    for (int i = 0; i < 8; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < 8; i++) {
        if (A[i] < min) {
            min = A[i];
            minIndex = i;
        }
        if (A[i] > max) {
            max = A[i];
            maxIndex = i;
        }
    }

    cout << "Minimum element: " << min << endl;
    cout << "Position of minimum element: " << minIndex << endl;
    cout << "Maximum element: " << max << endl;
    cout << "Position of maximum element: " << maxIndex << endl;

    return 0;
}
