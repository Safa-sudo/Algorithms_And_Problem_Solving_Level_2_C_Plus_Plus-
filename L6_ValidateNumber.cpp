#include <iostream>
using namespace std;

int ReadNumber() {
    int Number = 0;

    cout << "Please enter a Number : \n";
    cin >> Number;

    while (cin.fail()) {

        //user didn't input a number
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        cout << "Invalid Number, Enter a valid one:" << endl;

        cin >> Number;
    }

    return Number;

}
int main(){
cout << "Your Number is: " << ReadNumber();
return 0;
}
