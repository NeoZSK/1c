#include <iostream>

using namespace std;

int main()
{
    int calkowita;
    calkowita = 1.1;
    cout << calkowita << endl;

    float zPrzecinkiem;
    zPrzecinkiem = 1.1;
    cout << zPrzecinkiem;


    // int    - ca�kowite (51)
    // float  - z przecinkiem (51.1)
    // char   - znak ('a')
    // string - ci�g znak�w ("aaa")
    // bool   - warto�� logiczna (true/false, 1/0)

    bool isSun = false;

    if(!isSun) {
        cout << "Jest noc!";
    } else {
        cout << "Jest dzien!";
    }

    return 0;
}
