#include <iostream>

using namespace std;

int main()
{
	const char CHARACTER = '*';

	string command;

	int width = 31;
	int height = 15;

	// spawnpoint -> 0,0
	int posX, posY;
	posX = 15;
	posY = 7;




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

	if (command == "w") {
		posY--;
	}




}
