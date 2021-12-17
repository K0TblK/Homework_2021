#include<iostream>
#include<cmath>
int main(){
	double xmin, xmax, dx, eps;
	std::cout << "Input xmin, xmax, dx and epsilon: ";
	std::cin >> xmin >> xmax >> dx >> eps;
	for (xmin; xmin <= xmax; xmin += dx) {
		double power = xmin;
		int counter = 1;
		double curr = xmin / counter;
		double fx=0;
			while (abs(curr) >= eps) {
				counter += 2;
				fx += curr;
				curr= -1*curr*(xmin*xmin/(counter*(counter-1)));
				power *= power * power;
		}
		std::cout << "x = " << xmin << "; sin(x) = " << sin(xmin) << "; fx=: " << fx  << "\n";
	}
	return (0);
}
