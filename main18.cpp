#include <iostream>

using namespace std;

int main() {
    const int size = 10;
    int A[size];

    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> A[i];
    }

    int product_of_negatives = 1;
    int maximum = INT_MIN;

    // Iterate over the array
    for (int i = 0; i < size; i++) {
        if (A[i] < 0) {
            product_of_negatives *= A[i];
        }
        if (A[i] > maximum) {
            maximum = A[i];
        }
    }

    cout << "Product of all negative elements: " << product_of_negatives << endl;
    cout << "Greatest element: " << maximum << endl;

    return 0;
}
