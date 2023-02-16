#include <iostream>
using namespace std;

int main() {
    int A[8];
    int productPositive = 1;
    int X = 0;

    cout << "Enter 8 integers for the array:" << endl;
    for (int i = 0; i < 8; i++) {
        cin >> A[i];
        if (A[i] > 0) {
            productPositive *= A[i];
        }
        if (A[i] == 10) {
            X = productPositive;
        }
    }

    if (X > 0) {
        cout << "The product of all positive elements in the array is " << productPositive << "." << endl;
        cout << "X is assigned a value of " << X << "." << endl;
    } else {
        cout << "There is no element in the array that is equal to 10." << endl;
    }

    return 0;
}
