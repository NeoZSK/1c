#include <iostream>

using namespace std;

int main()
{
	const char CHARACTER = '*';

	char command;

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

//		int width = 31;
	//	int height = 15;

		switch (command)
		{
		case 'w':
			posY--;
			break;


		case 's':
			posY++;
			break;

		case 'a':
			posX--;
			break;


		case 'd':
			posX++;
			break;


		default:
			break;


		}
	}
}


// Hotbar i przedmioty

