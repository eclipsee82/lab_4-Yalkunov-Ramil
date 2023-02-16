#include <iostream>
using namespace std;

int main() {
    int A[12];
    int sumNegative = 0;
    int max = A[0];

    cout << "Enter 12 array elements: ";
    for (int i = 0; i < 12; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < 12; i++) {
        if (A[i] < 0) {
            sumNegative += A[i];
        }
        if (A[i] > max) {
            max = A[i];
        }
    }

    cout << "Sum of negative elements: " << sumNegative << endl;
    cout << "Maximum element: " << max << endl;

    return 0;
}
