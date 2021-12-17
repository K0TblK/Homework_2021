#include<iostream>
int main(){
	int num, sum=0, prod=1;
	std::cout << "Input integer: ";
	std::cin >> num;
	while (num!=0){
		int digit = num % 10;
		sum += digit;
		prod *= digit;
		num /= 10;
	}
	std::cout << "\n" << "Summary of digits: " << sum << "; Product of digits: " << prod << "\n";
	return(0);
}
