#include <iostream>

using namespace std;


int sum(int a, int b)
{
	int result = a + b;

	return result;
}

int getNumber() {
	int number = 0;

	cout << "Provide a number: ";
	cin >> number;
	return number;
}

int main()
{
	int num1 = getNumber();
	int num2 = getNumber();
	 
	cout << sum(num1, num2);


	return 0;

	const char CHARACTER = '*';

	string command;

	int width = 31;
	int height = 15;

	// spawnpoint
	int posX, posY;
	posX = 15;
	posY = 7;

	while (true) {
		system("cls");

		for (int i = 0; i < height; i++) {
			for (int j = 0; j < width; j++) {
				if (posX == j && posY == i) {
					cout << CHARACTER;
				}
				else {
					cout << ".";
				}
			}
			cout << endl;
		}

		cout << "Enter command (w,s,a,d): ";
		cin >> command;

	//  int width = 31;
	//	int height = 15;

		if (command == "w") {
			posY--;
		}
		
		if (command == "s") {
			posY++;

		}

		if (command == "a") {
			posX--;

		}

		if (command == "d") {
			posX++;

		}

	}
}


// Hotbar i przedmioty






