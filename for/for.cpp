#include <iostream>

using namespace std;

int main()
{
	int hours;
	cout << "How long should it take? (h)";
	cin >> hours;

	for (int i = 1; i <= hours; i++) {
		cout << "It's " << i << "hour" << endl;
	}

}