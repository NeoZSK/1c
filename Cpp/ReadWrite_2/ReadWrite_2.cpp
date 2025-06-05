#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    // ctrl + R, ctrl + R -> change name for all
    fstream inFile("./numbers.txt", ios::in);
    fstream outFile("./results.txt", ios::out);
    string line;
    int sum = 0;

    if (!inFile.is_open()) {
        cout << "error: cannot open file" << endl;
        return 1;
    }

    while (getline(inFile, line)) {
        int newVal = stoi(line) - 100;
        outFile << newVal << endl;
    }

    //cout << "sum is " << sum << endl;

    inFile.close();
    outFile.close();
}