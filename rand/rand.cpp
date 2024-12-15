#include <iostream>
#include <stdlib.h> // rand()
#include <time.h> // time()

using namespace std;


// 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
// 7 / 5 -> 1 r2
// 7 % 5 -> 2
// 
// 8 / 5 -> 1 r3
// 8 % 5 -> 3
// 
// 
// 9 / 5 -> 1 r4
// 
// (x % 5) + 1 -> <1;5>
// 


int main()
{
    srand(time(NULL));

    cout << rand() << endl;
    cout << rand() << endl;
    cout << rand() << endl;











    
    //srand(time(NULL));
    //// random number 1-100
    //int toPrint = rand() % 100 + 1 ;

    //cout << toPrint;
}
