#include <iostream>
#include <vector>

using namespace std;
int main()
{
    cout << "Lesson #49 - Try Catch\n";
    vector<int> vNumbers = {1, 2, 3};

    try
    {
        cout << vNumbers.at(5);
    }
    catch (...)
    {
        cout << "out of bound\n";
    }
}