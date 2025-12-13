#include <iostream>
#include <cmath>

int main() {
	double a, b, c, D;
	std::cout << "Enter coefficients a, b, c: ";
	std::cin >> a >> b >> c;

	if (a == 0 && b == 0 && c == 0) {
		std::cout << "This is not an equation (infinitely many solutions).";
    }
   
	else if (a == 0) {
		if (b == 0) {
			std::cout << "No solution (not an equation).";
		}
	       	else {
			std::cout << "Linear equation. x = " << -c / b;
	       		}
   		}
		else {
    //discriminant

	D = b * b - 4 * a * c;

    //D > 0

	if (D > 0) {
		double x1 = (-b + sqrt(D)) / (2 * a);
		double x2 = (-b - sqrt(D)) / (2 * a);
		std::cout << "D > 0, two roots: x1 = " << x1 << ", x2 = " << x2;
        }

    //D == 0

	else if (D == 0) {
            	double x = -b / (2 * a);
            	std::cout << "D = 0, one root: x = " << x;

            } 

    //D < 0
 
	else {
		std::cout << "D < 0, no real roots.";
        }
    }

    return 0;
}
