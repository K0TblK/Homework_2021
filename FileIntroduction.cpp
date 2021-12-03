#include <iostream>
#include <fstream>
int main(int argc, char* argv[]) {
	if (argc < 3) {
		std::cout << "Wrong Input\n";
		std::cout << "Usage: UpperLowerTxt.exe in_filename out_filename\n";
		return 2;
	}
	std::ifstream in(argv[1]);
	if (!in.is_open()) {
		std::cout << "Input file open Error!\n";
		return 1;
	}
	std::cout << "Input file successfully opened";
	std::ofstream out(argv[2]);
	if (!out.is_open()) {
		std::cout << "Output file open error! \n";
		return 1;
	}
	std::cout << "Output file successfully opened \n";

	char c;
	//while (!in.eof()) {
	//	/*in >> c;*/
	//	c = in.get();
	//	out << c;
	//	if (in.peek() == EOF)
	//		break;
	//}
	while ((c = in.get()) != EOF) {
		if (c >= 'A' && c <= 'Z') {
			c += 32;
		}else if (c >= 'a' && c <= 'z') {
			c -= 32;
		}
		out << c;
		
	}
	std::cout << "Successfully copied data!";
	out.close();
	in.close();
	std::cout << "Both filed are closed!";
	return 0;
}
