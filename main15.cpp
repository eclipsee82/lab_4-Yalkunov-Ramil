#include <iostream>
#include <limits> // needed for std::numeric_limits
using namespace std;

int main() {
    int A[14];
    int minPositive = std::numeric_limits<int>::max();

    cout << "Enter 14 integers for the array:" << endl;
    for (int i = 0; i < 14; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < 14; i += 2) {
        if (A[i] > 0 && A[i] < minPositive) {
            minPositive = A[i];
        }
    }

    if (minPositive == std::numeric_limits<int>::max()) {
        cout << "There are no positive elements on the even positions of the array." << endl;
    } else {
        cout << "The smallest positive element among the elements on the even positions of the array is " << minPositive << "." << endl;
    }

    return 0;
}
