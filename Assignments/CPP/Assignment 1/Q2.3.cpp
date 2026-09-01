#include <iostream>
using namespace std;

int main()
{
    int statusReg  = 0b10110001;
    int controlReg = 0b00000000;
    int dataReg    = 0b11001010;


    // regPtr1 - Pointer to const
    // The VALUE cannot be changed through the pointer
    // But the pointer itself can point somewhere else.


    const int* regPtr1 = &statusReg;

    cout << "regPtr1 value : " << *regPtr1 << endl;

    // *regPtr1 = 10;
    // ERROR: Cannot modify statusReg through regPtr1
    // because regPtr1 is a pointer to const int.

    regPtr1 = &dataReg;
    cout << "regPtr1 after repoint : " << *regPtr1 << endl;


    // regPtr2 - Const pointer
    // The pointer cannot point somewhere else.
    // But the VALUE can be changed.


    int* const regPtr2 = &controlReg;

    cout << "\nregPtr2 value : " << *regPtr2 << endl;

    *regPtr2 = 50;

    cout << "regPtr2 after write : " << *regPtr2 << endl;

    // regPtr2 = &dataReg;
    // ERROR: regPtr2 is a const pointer.
    // It must always point to controlReg.


    // regPtr3 - Const pointer to const
    // Neither the value nor the pointer can change.


    const int* const regPtr3 = &statusReg;

    cout << "\nregPtr3 value : " << *regPtr3 << endl;

    // *regPtr3 = 20;
    // ERROR: Cannot modify statusReg through regPtr3
    // because the pointer points to const int.

    // regPtr3 = &dataReg;
    // ERROR: regPtr3 itself is const.
    // It cannot be made to point to another address.

    return 0;
}