#include <iostream>
using namespace std;

int main() {
    int A[9];
    int sum = 0;
    int X = 0;
    bool zeroFound = false;

    cout << "Enter 9 integers for the array:" << endl;
    for (int i = 0; i < 9; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < 9; i++) {
        if (A[i] > 0) {
            sum += A[i];
        }
        if (A[i] == 0) {
            zeroFound = true;
        }
    }

    if (zeroFound) {
        X = sum;
        cout << "A zero was found in the array, so X is assigned the value of the sum of all positive elements." << endl;
    } else {
        cout << "No zero was found in the array." << endl;
    }

    cout << "X = " << X << endl;

    return 0;
}
