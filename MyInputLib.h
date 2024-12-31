#pragma once
#include <iostream>
#include <limits>

using namespace std;

namespace MyLib
{
    int ReadNumber(string msg)
    {
        int Number = 0;
        cout << msg << endl;

        cin >> Number;
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "invalid input, please enter a number \n";
            cin >> Number;
        }

        return Number;
    }
}