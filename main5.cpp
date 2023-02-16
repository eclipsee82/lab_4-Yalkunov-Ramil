#include <iostream>
using namespace std;

int main() {
    int A[15];
    int X = 0;

    cout << "Enter 15 array elements: ";
    for (int i = 0; i < 15; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < 15; i++) {
        if (A[i] == 5) {
            for (int j = 0; j < 15; j++) {
                if (A[j] > 0) {
                    X += A[j];
                }
            }
            break;
        }
    }

    cout << "X = " << X << endl;

    return 0;
}
