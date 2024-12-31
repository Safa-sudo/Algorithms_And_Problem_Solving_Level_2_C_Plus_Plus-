#include <iostream>
using namespace std;

int main()
{
    // declear pointer
    int *ptrX;
    float *ptrY;

    // dynmiclly creat memory
    ptrX = new int;
    ptrY = new float;

    // assinging value to memory
    *ptrX = 5;
    *ptrY = 10;

    cout << *ptrX << endl;
    cout << *ptrY << endl;

    // dealocate the memory
    delete ptrX;
    delete ptrY;
    cout << *ptrY << endl;

    *ptrY = 3;
    cout << *ptrY << endl;
    // ###################################
    cout << "Lesson #44 - Dynamic Arrays: new and delete\n";
    int num;
    cout << "Enter total number of student ?\n";
    cin >> num;

    float *ptr;

    // memory alloction
    ptr = new float[num];
    cout << "Enter grades of student\n";

    for (int i = 0; i < num; i++)
    {
        cout << "Student " << i + 1 << " = ";
        cin >> *(ptr + i);
    }

    cout << "\nDisplaing grads : \n";
    for (int i = 0; i < num; i++)
    {
        cout << "Student " << i + 1 << " = " << *(ptr + i) << endl;
    }

    // memory released
    delete[] ptr;
    // ######################################
}