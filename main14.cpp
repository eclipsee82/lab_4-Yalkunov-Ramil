#include <iostream>
#include <limits> // needed for std::numeric_limits
using namespace std;

int main() {
    int A[10];
    int minPositive = std::numeric_limits<int>::max();
    int maxPositive = -1;
    int minPositiveIndex = -1;
    int maxPositiveIndex = -1;

    cout << "Enter 10 integers for the array:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < 10; i++) {
        if (A[i] > 0) {
            if (A[i] < minPositive) {
                minPositive = A[i];
                minPositiveIndex = i;
            }
            if (A[i] > maxPositive) {
                maxPositive = A[i];
                maxPositiveIndex = i;
            }
        }
    }

    if (minPositiveIndex != -1) {
        cout << "The smallest positive element is " << minPositive << ", located at position " << minPositiveIndex << "." << endl;
        cout << "The greatest positive element is " << maxPositive << ", located at position " << maxPositiveIndex << "." << endl;
    } else {
        cout << "There are no positive elements in the array." << endl;
    }

    return 0;
}
