#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // // #############################
    // cout << "Lesson #46 - Access Elements\n";
    // vector<int> vNumbers = {1, 2, 3, 4, 5};

    // cout << "Using at.(i)\n";
    // cout << "Element at index 0 : " << vNumbers.at(0) << endl;
    // cout << "Element at index 1 : " << vNumbers.at(01) << endl;
    // cout << "Element at index 2 : " << vNumbers.at(2) << endl;
    // cout << "Element at index 3 : " << vNumbers.at(4) << endl;

    // cout << "\n\nUsing [i]\n";
    // cout << "Element at index 0 : " << vNumbers[0] << endl;
    // cout << "Element at index 4 : " << vNumbers[4] << endl;

    // // ################################
    // cout << "Lesson #47 - Change Elements\n";
    // vector<int> vNumbers = {1, 2, 3, 4, 5};

    // cout << "intial vector elements:\n";
    // for (const int &num : vNumbers)
    // {
    //     cout << num << "  ";
    // }

    // cout << "\n\nUpdate vector elements:\n";
    // for (int &num : vNumbers)
    // {
    //     num = 20;
    //     cout << num << "  ";
    // }

    // vNumbers[1] = 88;
    // vNumbers.at(4) = 90;
    // vNumbers.at(0) = 40;

    // cout << "\n\nUpdate vector elements:\n";
    // for (const int &num : vNumbers)
    // {
    //     cout << num << "  ";
    // }

    // ################################
    cout << "Lesson #48 - Vector Iterators\n";
    vector<int> vNumbers = {1, 2, 3, 4, 5};

    // declear itretor
    vector<int>::iterator iter;

    // use iterator with for loop
    for (iter = vNumbers.begin(); iter == vNumbers.end(); iter++)
    {
        cout << *iter << "  ";
    }
    cout << vNumbers.at(0) << endl;

    auto aterr = vNumbers.end() - 1;
    cout << &(*aterr) << endl;
}