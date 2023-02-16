#include <iostream>
#include <climits>

using namespace std;

int main() {
    const int size = 15;
    int A[size];

    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> A[i];
    }

    int smallest_positive = INT_MAX;
    int smallest_positive_position = -1;

    for (int i = 0; i < size; i++) {
        if (A[i] > 0 && A[i] < smallest_positive) {
            smallest_positive = A[i];
            smallest_positive_position = i;
        }
    }

    if (smallest_positive_position != -1) {
        cout << "Smallest positive element: " << smallest_positive << endl;
        cout << "Position of smallest positive element: " << smallest_positive_position << endl;
    } else {
        cout << "There is no positive element in the array." << endl;
    }

    return 0;
}
