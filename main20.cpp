#include <iostream>
#include <climits>

using namespace std;

int main() {
    const int size = 10;
    int A[size];

    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> A[i];
    }

    // Initialize variables to store the greatest negative element on even positions
    int greatest_negative = INT_MIN;

    // Iterate over the even positions of the array
    for (int i = 1; i < size; i += 2) {
        if (A[i] < 0 && A[i] > greatest_negative) {
            greatest_negative = A[i];
        }
    }

    // Print the result
    if (greatest_negative != INT_MIN) {
        cout << "Greatest negative element on even positions: " << greatest_negative << endl;
    } else {
        cout << "There is no negative element on even positions in the array." << endl;
    }

    return 0;
}
