#include <iostream>
#include <Windows.h>
using namespace std;

//1. Pobiera od użytkownika dwie liczby oraz znak operacji(np. + , -, *, / ).
//2. W zależności od wprowadzonego znaku, wykonuje odpowiednią operację matematyczną i wyświetla wynik.
//3. Obsłuż przypadek dzielenia przez zero, wyświetlając odpowiedni komunikat.
//4. Po wykonaniu operacji zapytaj użytkownika, czy zakończyć program, czy dokonać kolejnych obliczeń

int main()
{
	int num1, num2;
	char sign;
	char userExitInput;
	bool isRunning = true;

	while (isRunning) {
		system("cls");
		cout << "------------------" << endl;
		cout << "Podaj liczbe1: ";
		cin >> num1;

		cout << "Podaj znak operacji (+,-,/,*,%): ";
		cin >> sign;

		cout << "Podaj liczbe2: ";
		cin >> num2;


		int result = 0;


		switch (sign) {
		case '+':
			result = num1 + num2;
			break;
		case '-':
			result = num1 - num2;
			break;
		case '/':
			if (num2 == 0) {
				cout << "error...";
				continue;
			}
			else {
				result = num1 / num2;
			}
			break;
		case '*':
			result = num1 * num2;
			break;
		case '%':
			result = num1 % num2;
			break;
		default:
			cout << "Error: wrong operator" << endl;
			continue;
		}

		cout << num1 << sign << num2 << "=" << result << endl;
		cout << endl;

		cout << "Czy again program? (y/n)" << endl;
		cin >> userExitInput;

		if (userExitInput == 'n') {
			isRunning = false;
		}
	}

}
