
#include <iostream>

using namespace std;

struct coordinates {
	int x;
	int y;
};

int main()
{
	string command;
	const int WIDTH = 30;
	const int HEIGHT = 10;

	coordinates position;
	position.x = 13;
	position.y = 5;


	while (true) {
		system("cls");

		for (int j = 0; j < HEIGHT; j++) {
			for (int i = 0; i < WIDTH; i++) {
				if (i == position.x && j == position.y) {
					cout << "*";
				}
				else {
					cout << ".";
				}

			}
			cout << endl;
		}

		cout << endl;
		cout << "Your command (n, e, w, s)> ";
		cin >> command;


		if (command == "n") {
			position.y = max(position.y - 1, 0);
		}
		else if (command == "s") {
			position.y = min(position.y + 1, HEIGHT - 1);
		}
		else if (command == "w") {
			position.x--;
		}

		else if (command == "e") {
			position.x++;
		}
		else {
			cout << "- - -" << endl;
			cout << "No such command. Use \"help\"" << endl;
			cout << "Press any key to continue..." << endl;
			cin.get();
			cin.get();

		}
	}
}
