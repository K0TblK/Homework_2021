#include<iostream>
int main(){
	int num;
	do {
		std::cout << "Input integer [0, 4000]: " << "\n";
		std::cin >> num;
	} while ((num > 4000)||(num <= 0));
    while ((num-1000)>=0){
        std::cout<<"M";
        num-=1000;
    };
    while (num-900>=0){
		std::cout << "CM";
        num-=900;
    };
    while (num-500>=0){
		std::cout << "D";
        num-=500;
    };
    while (num-400>=0){
		std::cout << "CD";
        num-=400;
    };
    while (num-100>=0){
		std::cout << "C";
        num-=100;
    };
    while (num-90>=0){
		std::cout << "XC";
        num-=90;
    };
    while (num-50>=0){
		std::cout << "L";
        num-=50;
    };
    while (num-40>=0){
		std::cout << "XL";
        num-=40;
    };
    while (num-10>=0){
		std::cout << "X";
        num-=10;
    };
    while (num-9>=0){
		std::cout << "IX";
        num-=9;
    };
    while (num-5>=0){
		std::cout << "V";
        num-=5;
    };
    while (num-4>=0){
		std::cout << "IV";
        num-=4;
    };
    while (num-1>=0){
		std::cout << "I";
        num-=1;
    }
	return(0);
}
