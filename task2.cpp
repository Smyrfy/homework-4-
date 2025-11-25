#include <iostream>
using namespace std;

int stringLength(const char* str) {
    int length = 0;
    
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str[100];  
    
    cout << "Enter a string: ";
    cin >> str;  
    
    int length = stringLength(str); 
    cout << "Length of the string: " << length << endl; 
    
    return 0;
}
