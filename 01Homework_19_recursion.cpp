/*########################################################
# Write programs to do the following Using Recursion:     #
# 1/Program to print numbers from M down to N.            #
# 2/Program to calculate power N^M.                       #
########################################################
*/

#include <iostream>
using namespace std;

void printNumberFromMtoN(int N, int M) {
    if (M >= N) {
        cout << M << "\n";
        printNumberFromMtoN(N, M - 1);
    }
}

int MyPower(int Base, int Power) {

    if (Power > 0) {

        return Base * MyPower(Base, Power - 1);
    }
    return 1;
}

int main() {
    cout << "P#1 :\n";
    printNumberFromMtoN(1, 10);

    cout << "\n\nP#2 :\n";

    cout << MyPower(3, 3);
    return 0;
}
