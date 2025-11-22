#include <iostream>
using namespace std;

void print_diamond(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < (n - i - 1); j++) {
            cout << " ";
        }
        for (int j = 0; j < (i + 1); j++) {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 0; i < (n - 1); i++) {
        for (int j = 0; j < (i + 1); j++) {
            cout << " ";
        }
        for (int j = 0; j < (n - i - 1); j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the size of the diamond: ";
    cin >> n;
    print_diamond(n);
    return 0;
}

