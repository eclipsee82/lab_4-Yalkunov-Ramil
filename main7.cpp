#include <iostream>
using namespace std;

int main() {
    int A[8];
    int min = A[0];
    int pos = 0;

    cout << "Enter 8 integers for the array:" << endl;
    for (int i = 0; i < 8; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < 8; i++) {
        if (A[i] < min) {
            min = A[i];
            pos = i;
        }
    }

    cout << "The smallest element is " << min << endl;
    cout << "Its position is " << pos << endl;

    return 0;
}
