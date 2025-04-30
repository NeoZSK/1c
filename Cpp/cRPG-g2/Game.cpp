
#include <iostream>

using namespace std;

int main()
{
    const int MAX_HEALTH = 100;

    // Dungeons'n'Arbuses
    // DNA

    string name;
    string color;
    int characterClass;
    int health = MAX_HEALTH;

    // 1 - melee
    // 2 - rangee
    // 3 - magee
   

    cout << "Witaj Sigmo w swiecie Arbusow!" << endl ;
    cout << "Czeka Cie smierc!" << endl;
    cout << "Albo nie..." << endl;
    
    cout << "- - -" << endl;

    cout << "Jak sie zwiesz, przybyszu?" << endl;
    cin >> name;

    cout << "Podaj kolor:" << endl;
    cin >> color;

    cout << "Jakiej klasy jestes?" << endl;
    cin >> characterClass;


    cout << "- - - " << endl;

    cout << name;

    switch (characterClass) {
    case 1:
        cout << "melee" << endl;
        break;
    case 2:
        cout << "rangee" << endl;
        break;
    case 3:
        cout << "magee" << endl;
        break;
    case 4: 
    case 5:
        cout << "Ukryta klasa, zablokowan";
        break;
    default:
        cout << "NPC" << endl;
    }



}


// Arbuslike
// RPG
// Ninja (melee, range, mage, necro, skibidi), który zbiera arbusy
// NPCtowie
// Przeciwnicy to owoce
// Cel: zdobyć wielkiego złotego arbusa
// Przenoszenie się wczasie za pomocą zmiany czasu w kompie
// Drzewko umiejętności 