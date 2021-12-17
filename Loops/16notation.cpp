//-------Tenth task
	int num;
	std::cout << "Input integer: ";
	std::cin >> num;
	int num_tmp = num;
	int deg = 0;
	while ((num_tmp /= 16) != 0) {
		++deg;
	}
	int two_deg = 1 << 4*deg;
	while (two_deg != 0) {
		if ((num / two_deg) > 9) {
			std::cout << (char)(num / two_deg + 55);
		}
		else {
			std::cout << (num / two_deg);
		}
		num %= two_deg;
		two_deg >>= 4;
	}
	return(0);
