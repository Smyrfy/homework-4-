#include <iostream>

int main() {
    double sum;
    std::cin >> sum;

    if (sum > 1000) sum *= 0.95;
    else if (sum > 500) sum *= 0.97;

    std::cout << sum;
    return 0;
}
