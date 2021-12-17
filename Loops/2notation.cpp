#include<iostream>
int main(){
	int num,deg=1;
	std::cout << "Input integer: ";
	std::cin >> num;
	int num_tmp = num;
	while (num_tmp != 1) {
		num_tmp/=2;
		deg *= 2;
		std::cout << deg << "\n";
	}
	std::cout << "\n" << "Your number is: ";
	while (deg != 0) {
		std::cout << (num / deg);
		num %= deg;
		deg /= 2;
	}
	return(0);
}
