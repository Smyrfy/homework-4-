#include <iostream> 
int main() {
  int m, n;
  std::cout << "Enter m and n" << std::endl;
  std::cin >> m >> n;
  int p = 0;
  for (int i = 0; i < m; i++) {
    int b = p;
    for (int j = n; j > 0; j--) {
      if (i%2 == 0) {
        std::cout << p << " ";
        p++;
      }
      else {
        std::cout << b+j-1 << " ";
        p++;
      }
    }
    std::cout << std::endl;
  }
