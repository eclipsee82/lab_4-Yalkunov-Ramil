#include <iostream>
using namespace std;

int main() {
    int A[5];
    int sumNegative = 0;
    int numPositive = 0;

    cout << "Enter 5 array elements: ";
    for (int i = 0; i < 5; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < 5; i++) {
        if (A[i] < 0) {
            sumNegative += A[i];
        } else if (A[i] > 0) {
            numPositive++;
        }
    }

    cout << "Sum of negative elements: " << sumNegative << endl;
    cout << "Number of positive elements: " << numPositive << endl;

    return 0;
}
