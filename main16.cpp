#include <iostream>
#include <limits>
using namespace std;

int main() {
    int A[9];
    int min = std::numeric_limits<int>::max();
    int max = std::numeric_limits<int>::min();
    int numPositive = 0;
    int productNegative = 1;

    cout << "Enter 9 integers for the array:" << endl;
    for (int i = 0; i < 9; i++) {
        cin >> A[i];
        if (A[i] < 0) {
            productNegative *= A[i];
        } else if (A[i] > 0 && A[i] > min && A[i] < max) {
            numPositive++;
        }
        if (A[i] < min) {
            min = A[i];
        }
        if (A[i] > max) {
            max = A[i];
        }
    }

    cout << "The product of negative elements in the array is " << productNegative << "." << endl;
    cout << "The number of positive elements located between the minimum and the maximum of the array is " << numPositive << "." << endl;

    return 0;
}
