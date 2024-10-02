#include <iostream>

using namespace std;

int main()
{
	const char CHARACTER = '*';

	int width = 31;
	int height = 15;

	// spawnpoint -> 0,0
	int x, y;
	x = 0;
	y = 0;

	cout << "Enter x coord: ";
	cin >> x;
	cout << "Enter y coord: ";
	cin >> y;

	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			if (x == j && y == i) {
				cout << CHARACTER;
			} else {
				cout << ".";
			}
		}
		cout << endl;
	}


}
