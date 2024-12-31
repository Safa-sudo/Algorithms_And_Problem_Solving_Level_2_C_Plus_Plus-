#include <iostream>
#include <vector>

using namespace std;

void fun1(int a)
{
    a++;
}
int main()
{
    // int x = 10;
    // cout << &x << endl;

    // fun1(x); // the value  of a dont change buz we send by val

    // ###########################
    int a = 10;
    int &x = a;
    cout << &a << endl;
    cout << &x << endl;
    cout << a << endl;
    cout << x << endl;
    x = 20;
    cout << a << endl;
    cout << x << endl;
    a = 30;
    cout << a << endl;
    cout << x << endl;
    return 0;
}