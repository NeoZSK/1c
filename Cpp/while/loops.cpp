#include <iostream>

using namespace std;

int main()
{

	int a = -10;
	
	if (a > 0) {
		cout << "more than 0\n";
	}
	if (a > 2) {
		cout << "more than 2" << endl;
	}


	return 0;
	int option = 0;
	while (option != 3) {
		cout << "1. Nowa gra" << endl;
		cout << "2. Wczytaj gre" << endl;
		cout << "3. Wyjdz" << endl;

		cin >> option;

		if (option == 1) {
			cout << "New game created" << endl;
		}
		if (option == 2) {
			cout << "Game is loading..." << endl;
		}	
		if (option == 3) {
			cout << "Exiting..";
		}
	}

}

/*
	1. Nowa gra
	2. Wczytaj grę
	3. Wyjdz

	> 2

*/