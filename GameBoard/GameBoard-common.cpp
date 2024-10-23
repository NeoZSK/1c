#include <iostream>
#include <windows.h> // system("cls");

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



void drawBoard(int posX, int posY) {
	const int width = 31;
	const int height = 15;
	const char CHARACTER = '*';
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
}


int main()
{
	int posX, posY;
	string command;

	// spawnpoint

	posY = 7;
	posX = 15;

	drawBoard(posX, posY);
	drawBoard(posX, posY);
	drawBoard(posX, posY);

	while (true) {
		drawBoard(posX, posY);

		cout << "Enter command (w,s,a,d): ";
		cin >> command;

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






