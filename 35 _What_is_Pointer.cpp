#include <iostream>
#include <vector>

using namespace std;

struct stEmployee
{
    int Salary;
    string FristName;
};

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    // cout << "Lesson #35 - What is Pointer?\n";
    // int a = 10;
    // int *p = &a;

    // cout << "a value = " << a << "\n";
    // cout << "a address = " << &a << "\n";
    // cout << "pointer value = " << p << "\n";
    // cout << "pointer address = " << &p << "\n";

    // // ############################################
    // cout << "\n\nLesson #36 - Dereferencing Pointer\n";
    // int aa = 10;
    // int *pp = &aa;
    // cout << "aa value = " << aa << "\n";
    // cout << "aa address = " << &aa << "\n";
    // cout << "pointer value = " << pp << "\n";
    // cout << "the value of address that pointer is pointing to it =  " << *pp << "\n";

    // aa = 20;
    // cout << aa << endl;
    // cout << *pp << endl;

    // *pp = 30;
    // cout << aa << endl;
    // cout << *pp << endl;
    // ###############################################
    // cout << "\n\n Lesson #38 - Pointers vs References\n";
    // int a = 10;
    // int &x = a;

    // cout << &a << endl;
    // cout << &x << endl;

    // cout << a << endl;
    // cout << x << endl;

    // int *p = &a;
    // cout << p << endl;
    // cout << *p << endl;

    // int b = 20;
    // // you van changed refrence after assign==> &x = b;
    // p = &b;
    // cout << p << endl;
    // cout << *p << endl;

    // cout << "Lesson #39 - Call by Reference: Using pointers\n";
    // int a = 10;
    // int b = 20;

    // cout << "Before swap :\n";
    // cout << "a = " << a << endl;
    // cout << "b = " << b << endl;

    // swap(&a, &b);

    // cout << "after swap :\n";
    // cout << "a = " << a << endl;
    // cout << "b = " << b << endl;

    // ###############################

    // cout << " Lesson #40 - Pointers and Arrays\n";
    // int arr[] = {1, 2, 3, 4};
    // int *ptr = arr;

    // cout << "Array Addresses :\n";
    // for (int i = 0; i < 4; i++)
    // {
    //     cout << (ptr + i) << endl;
    // }

    // cout << "Array Values :\n";
    // for (int i = 0; i < 4; i++)
    // {
    //     cout << *(ptr + i) << endl;
    // }
    // #######################
    // cout << "Lesson #41 - Pointers and Structure\n";
    // stEmployee Employee1, *ptr;
    // Employee1.FristName = "Safa";
    // Employee1.Salary = 5000;

    // cout << Employee1.FristName << endl;
    // cout << Employee1.Salary << endl;

    // ptr = &Employee1;

    // cout << "\nUsing pointer : \n";
    // cout << ptr->FristName << endl;
    // cout << ptr->Salary << endl;

    // cout << "Address :\n";
    // cout << &ptr->FristName;
    // ############################################
    cout << "Lesson #42 - Pointer to Void\n";

    void *p;
    int a = 4;

    p = &a;
    cout << p << endl;
    cout << *(static_cast<int *>(p)) << endl; // brakets must be written(p)

    string s = "safa";
    p = &s;
    cout << p << endl;
    cout << *(static_cast<string *>(p)) << endl; // brakets must be written(p)

    stEmployee e;
    e.FristName = "test";
    e.Salary = 500;

    stEmployee arr[] = {e};

    p = arr;
    cout << (static_cast<stEmployee *>(p))->FristName;

    return 0;
}