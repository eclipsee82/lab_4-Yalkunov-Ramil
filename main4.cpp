#include <iostream>
using namespace std;

int main() {
    int A[10];
    int sumPositive = 0;
    int numPositiveInRange = 0;
    int min = A[0];
    int max = A[0];
    int minIndex, maxIndex;

    cout << "Enter 10 array elements: ";
    for (int i = 0; i < 10; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < 10; i++) {
        if (A[i] < min) {
            min = A[i];
            minIndex = i;
        }
        if (A[i] > max) {
            max = A[i];
            maxIndex = i;
        }
    }

    for (int i = minIndex + 1; i < maxIndex; i++) {
        if (A[i] > 0) {
            sumPositive += A[i];
            numPositiveInRange++;
        }
    }

    // Output results
    cout << "Sum of positive elements: " << sumPositive << endl;
    cout << "Number of positive elements between min and max: " << numPositiveInRange << endl;

    return 0;
}
