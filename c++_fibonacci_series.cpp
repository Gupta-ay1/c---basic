#include <iostream>
using namespace std;

// Function to print Fibonacci series up to n terms
void printFibonacci(int n) {
    int t1 = 0, t2 = 1, nextTerm;

    cout << "Fibonacci Series: ";
    for (int i = 1; i <= n; ++i) {
        if (i == 1) {
            cout << t1 << " ";
            continue;
        }
        if (i == 2) {
            cout << t2 << " ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;

        cout << nextTerm << " ";
    }
}

int main() {
    int n;

    cout << "Enter the number of terms: ";
    cin >> n;

    printFibonacci(n);

    return 0;
}
