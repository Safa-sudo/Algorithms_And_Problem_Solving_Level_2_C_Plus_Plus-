#include <iostream>
#include <vector>
#include "MyInputLib.h"

using namespace std;

struct stEmployee
{
    string FirstName;
    string LastName;
    int Salary;
};

void ReadNumber(vector<int> &vNumbers)
{
    char Readmore = ' ';
    int Number = 0;

    do
    {
        Number = MyLib::ReadNumber("Please enter a number");
        vNumbers.push_back(Number);

        cout << "\nDO you want to add more number?(Y\\N)\n";
        cin >> Readmore;

    } while (Readmore == 'Y' || Readmore == 'y');
}

void PrintNumbers(vector<int> &vNumbers)
{
    cout << "Vector Numbers = \n";
    // Reg Loop
    for (int &Number : vNumbers)
    {
        cout << Number << " ";
    }
    cout << endl;
}

void ReadEmployee(vector<stEmployee> &Employees)
{
    char addMore = 'Y';
    stEmployee tempEmployee;

    while (addMore == 'Y' || addMore == 'y')
    {
        cout << "Please Enter employee data: \n";
        cout << "Enter Frist Name : ";
        cin >> tempEmployee.FirstName;

        cout << "Enter Last Name : ";
        cin >> tempEmployee.LastName;

        cout << "Enter Salary : ";
        cin >> tempEmployee.Salary;
        Employees.push_back(tempEmployee);

        cout << "\ndo you want to add more employee ? (Y/N)?";
        cin >> addMore;
    }
}

void PrintEmployees(vector<stEmployee> &Employees)
{

    cout << "\n\nEmployees vector :\n\n";

    // Ranged loop
    for (stEmployee &Employee : Employees)
    {
        cout << "FristName : " << Employee.FirstName << endl;
        cout << "LastName : " << Employee.LastName << endl;
        cout << "Salary : " << Employee.Salary << endl
             << endl;
    }
}
int main()
{
    // cout << "Lesson # 28 - Introduction , Declaration and Initialization\n\n";
    // // std:Vector<T> vector_name
    // vector<int> vNumbers = {1, 2, 3, 4, 5};

    // cout << "Numbers = ";
    // // Renged loop using refrence is best
    // for (int &Number : vNumbers)
    // {
    //     cout << Number << " ";
    // }

    // // #############################################################
    // cout << "\n\n\nLesson # 29 - Add elements\n";
    // vector<int> vNumberss;
    // vNumberss.push_back(10);
    // vNumberss.push_back(20);
    // vNumberss.push_back(30);
    // vNumberss.push_back(40);

    // // Renged loop using refrence is best
    // for (int &Number : vNumberss)
    // {
    //     cout << Number << " ";
    // }

    // cout << "\n\nHome work : read element in runtime\n";
    // vector<int> vNumbetHome;
    // ReadNumber(vNumbetHome);
    // PrintNumbers(vNumbetHome);

    // // ############################################
    // cout << "\n\n\nLesson # 30 - Vector of Structure\n";

    // // std::vector<T> vectorName
    // vector<stEmployee> vEmployees;

    // stEmployee tempEmployee;

    // tempEmployee.FirstName = "Safa";
    // tempEmployee.LastName = "Mustafa";
    // tempEmployee.Salary = 8000;
    // vEmployees.push_back(tempEmployee);

    // tempEmployee.FirstName = "Mustafa";
    // tempEmployee.LastName = "Mustafa";
    // tempEmployee.Salary = 1000;
    // vEmployees.push_back(tempEmployee);

    // tempEmployee.FirstName = "Ahmed";
    // tempEmployee.LastName = "Abu-baker";
    // tempEmployee.Salary = 4000;
    // vEmployees.push_back(tempEmployee);

    // cout << "\n\nEmployees vector :\n\n";

    // // Ranged loop
    // for (stEmployee &Employee : vEmployees)
    // {
    //     cout << "FristName : " << Employee.FirstName << endl;
    //     cout << "LastName : " << Employee.LastName << endl;
    //     cout << "Salary : " << Employee.Salary << endl
    //          << endl;
    // }

    // cout << "\n\n\nHome work read employee in runtime\n\n";
    // vector<stEmployee> es;

    // ReadEmployee(es);
    // PrintEmployees(es);

    // // ############################################
    // cout << "\n\n\nLesson # 31 - Remove elements\n";
    // vector<int> vNumbers1;
    // vNumbers1.push_back(10);
    // vNumbers1.push_back(20);
    // vNumbers1.push_back(30);
    // vNumbers1.push_back(40);
    // vNumbers1.push_back(50);

    // vNumbers1.pop_back();
    // vNumbers1.pop_back();
    // vNumbers1.pop_back();
    // vNumbers1.pop_back();
    // vNumbers1.pop_back();

    // if (!vNumbers1.empty())
    // {
    //     PrintNumbers(vNumbers1);
    // }
    // // empty(), size() , clear()

    // #########################################
    cout << "\n\nLesson #32 - Vector Functions\n\n";
    vector<int> vNumbers2;

    vNumbers2.push_back(10);

    vNumbers2.push_back(20);
    vNumbers2.push_back(30);
    vNumbers2.push_back(40);
    vNumbers2.push_back(50);
    vNumbers2.clear();

    // cout << "Frist element = " << vNumbers2.front() << endl;
    // cout << "Last element = " << vNumbers2.back() << endl;

    // retruns the number of element present in the vector
    cout << "Size of array = " << vNumbers2.size() << endl;

    // check overall size of a vector
    cout << "Capacity of vector= " << vNumbers2.capacity() << endl;

    // returns 1 if vector is empty
    cout << "Empty : " << vNumbers2.empty() << endl;

#ifdef _MSC_VER
    std::cout << "Using MSVC compiler\n";
#elif defined(__GNUC__)
    std::cout << "Using GCC compiler\n";
#elif defined(__clang__)
    std::cout << "Using Clang compiler\n";
#else
    std::cout << "Unknown compiler\n";
#endif
}