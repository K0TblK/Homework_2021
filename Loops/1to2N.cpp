//-----------Second task
	int n, deg = 1; 
	double sum = 0;
	std::cout << "Input max degree: ";
	std::cin >> n;
	for (int i = 1; i <= n; ++i) {
		sum += (1.0/deg);
		deg *= 2;
	}
	std::cout << "\n" << "Summary of subsequence: " << sum << "\n";
	system("pause");
	return(0);
