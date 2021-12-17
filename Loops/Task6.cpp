//-----Sixth task
	int n, counter=0, vertex=0;
	std::cout << "Input integer: ";
	std::cin >> n;
	while (n != 1) {
		if (n % 2 == 0) {
			n = n / 2;
		}
		else {
			n = n * 3 + 1;
		}
		if (vertex < n)
			vertex = n;
		++counter;
	}
	std::cout << "\n" << "Amount of steps:  " << counter << "  Vertex:  " << vertex;
	return (0);
