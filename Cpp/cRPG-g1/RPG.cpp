#include <iostream>

using namespace std;

int main()
{
	int userAge;

	string name;
	bool sex; // male - 0 / female - 1
	int arbusClass;

	/*

	 Klasy postaci:
	 - Arbusomanta
	 - Arbusojownik
	 - Arbucznik
	 - Arbusarcista
	 - Arbutank
	 */

	 // Arbuscraft
	cout << "Ile masz lat?" << endl;
	cin >> userAge;

	if (userAge < 18) {
		cout << "Typie, nie jestes pelnoletni. Nie gramy w to. Poczekaj do 18stki. Idz spac" << endl;
		return 0;
	}

	cout << "- - -" << endl;

	cout << "Hello adventurer! Witaj w świecie Arbusow!" << endl;
	cout << "Przed wyruszeniem na przygodę, przejdź tutorial" << endl;
	cout << "Najpierw powiedz kim jestes!" << endl;

	cout << "- - -" << endl;

	cout << "Twoje imie: ";
	cin >> name;
	cout << "Wybierz plec (mezczyzna: 0, kobieta: 1): ";
	cin >> sex;

	cout << "Wybierz klase postaci:" << endl;
	cout << "1. Arbusomanta" << endl;
	cout << "2. Arbusojownik" << endl;
	cout << "3. Arbucznik" << endl;
	cout << "4. Arbusarcista" << endl;
	cout << "5. Arbutank" << endl;

	cin >> arbusClass;

	cout << "- - -" << endl;

	if (sex == 1) {
		cout << "Jestes kobieta" << endl;
	}
	else
	{
		cout << "Jestes mezczyzna" << endl;
	}

	cout << endl;

	switch (arbusClass) {
	case 1:
		cout << "Arbusomanta" << endl;
		break;

	case 2:
		cout << "Arbusojownik" << endl;
		break;
	case 3:
		cout << "Arbucznik" << endl;
		break;
	case 4:
		cout << "Arbusarcista" << endl;
		break;
	case 5:
		cout << "Arbutank" << endl;
		break;
	default:
		cout << "Jestes NPC" << endl;
		break;
	}



	return 0;
}

// Plansza (z góry)
// Dungeony
// Destorying mobs
// Mikrotransakcje
// Handel
// RNG (losowość)
// NPC
// Interakcje ze światem
// Multiplayer
// Zapusywanie gry




