#include <iostream>

using namespace std;

int main()
{
	int number = 0;

	// if, else if, else

	if (number == 0) {
		cout << "gratulacje uzytkowniku, skibidi\n" << endl;
	}

	cin >> number;

	// while
	while (number > 0) {
		cout << "iteracja: " << number << endl;
		number -= 2;
	}

	// zmienne
	string text;
	char znak;
	int liczbaCalkowita;
	float zPrzecinkiem;
	double zPrzecinkiemPodwojnaPrecyzja;
	bool truefalse;
	string htmlText = "<div>Hello Kartky</ div>";
	cout << htmlText;

	// for
	for (int i = 0; i < 10; i++) {
		cout << i << ", ";
	}

}
