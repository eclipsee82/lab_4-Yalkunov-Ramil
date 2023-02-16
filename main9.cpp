#include <iostream>
using namespace std;

int main() {
    int A[10];
    int sum = 0;
    int min = INT_MAX;
    int max = INT_MIN;
    int count = 0;

    cout << "Enter 10 integers for the array:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < 10; i++) {
        if (A[i] < min) {
            min = A[i];
        }
        if (A[i] > max) {
            max = A[i];
        }
    }

    for (int i = 0; i < 10; i++) {
        if (A[i] > 0) {
            sum += A[i];
            if (A[i] > min && A[i] < max) {
                count++;
            }
        }
    }

    cout << "The sum of positive elements is " << sum << endl;
    cout << "The number of positive elements between the minimum and maximum is " << count << endl;

    return 0;
}
