
#include <iostream>

using namespace std;

int main()
{
	int a;
	long long f;

	float c;
	double e;

	char b;
	string d;

	bool isRunning = true;

	while (isRunning) {
		cout << "Hello world!" << endl;
		cin >> a;

		if (a > 0) {
			cout << "Wieksze od 0";
			isRunning = false;
		}
		else {
			cout << "Mniejsze, lub rowne 0";
		}
	}




	cin >> a;

	if (a % 2 == 0) {
		cout << "even";
	}
	else {
		cout << "not even";
	}



}
