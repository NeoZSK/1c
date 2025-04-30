
#include <iostream>

using namespace std;

int main()
{
    bool warunek = true;
    int number = 5;

    // if
    if (number == 5) {
        cout << "inside if" << endl;
    }   


    // while
    while (number < 10) {
        cout << "inside while (number): " << number << endl;
        number++;
    }

    bool isRunning = true;

    while (isRunning) {

        cout << "Your input: ";
        string input;
        cin >> input;
        
        if (input == "exit") {
            isRunning = false;
        }
    }

    // for

}