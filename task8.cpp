#include <iostream>
#include <string>
using namespace std;

bool isIceCreamSandwich(const string& str) {
    int n = str.length();
    if (n < 3 || n % 2 == 0) return false;
    
    int mid = n / 2;
    return str[0] == str[n - 1] && str[0] != str[mid];
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    if (isIceCreamSandwich(input)) {
        cout << "The string is an ice cream sandwich!" << endl;
    } else {
        cout << "The string is not an ice cream sandwich!" << endl;
    }

    return 0;
}
