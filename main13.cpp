#include <iostream>
using namespace std;

int main() {
    int A[7];
    int numPositiveOnOddPositions = 0;
    int productOfNegative = 1;

    cout << "Enter 7 integers for the array:" << endl;
    for (int i = 0; i < 7; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < 7; i++) {
        if (A[i] < 0) {
            productOfNegative *= A[i];
        } else if (i % 2 == 1 && A[i] > 0) {
            numPositiveOnOddPositions++;
        }
    }

    cout << "The product of negative elements is " << productOfNegative << "." << endl;
    cout << "The number of positive elements on odd positions is " << numPositiveOnOddPositions << "." << endl;

    return 0;
}
