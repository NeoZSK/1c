#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream file("./numbers.txt", ios::in);
    fstream fileOut("./results.txt", ios::out);
    string line;

    int sum = 0;

    if (!file.is_open()) {
        cout << "error: cannot open file" << endl;
        return 1;
    }
    

    // Read line by line
    while (getline(file, line)){
        int newVal = stoi(line) - 100;
        fileOut << newVal << endl;
    }

    file.close();
    fileOut.close();
}
