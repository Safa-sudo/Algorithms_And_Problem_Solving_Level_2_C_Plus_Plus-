#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

int main()
{

    cout << "Intger Format \n";

    int page = 1, ToatalPage = 10;
    // print string and int varible
    printf("The page Number = %d\n", page);
    printf("You are in page %d of %d\n", page, ToatalPage);

    // Width specifiction
    printf("The page number = %03d\n", page);
    printf("The page number = %0*d\n", 2, page);
    printf("The page number = %0*d\n", 3, page);
    printf("The page number = %0*d\n", 4, page);
    printf("The page number = %0*d\n", 5, page);

    cout << "\n\nFloat Format \n";
    float PI = 3.14159265;
    // Precision specification
    printf("Precision specification of %.*f\n", 1, PI);
    printf("Precision specification of %.*f\n", 2, PI);
    printf("Precision specification of %.*f\n", 3, PI);
    printf("Precision specification of %.*f\n", 4, PI);

    float x = 7.0, y = 9.0;
    printf("\nThe float division is :  %.3f/%.3f  = %.3f \n\n", x, y, x / y);

    double d = 12.45;
    printf("The double value is : %.3f \n", d);
    printf("The double value is : %.4f \n", d);

    cout << "\n\nString and Char Format \n";
    char Name[] = "Mohammed Abu-Hadhoud";
    char SchoolName[] = "Programming Advices";

    printf("Dear %s, How are you ?\n", Name);
    printf("Welcome to %s School!\n", SchoolName);

    char c = 'S';
    printf("Setting the width of c :%*c \n", 1, c);
    printf("Setting the width of c :%*c \n", 2, c);
    printf("Setting the width of c :%*c \n", 3, c);
    printf("Setting the width of c :%*c \n", 4, c);
    printf("Setting the width of c :%*c \n", 5, c);

    cout << "\n\nSetw Manipulator" << endl;
    cout << "---------|--------------------------------|---------|\n";
    cout << "   Code  |              Name              |   Mark  |\n";
    cout << "---------|--------------------------------|---------|\n";

    // cout << left;
    cout << setw(9) << "C101" << "|" << setw(32) << "Intoduction to Programming 1" << "|" << setw(9) << "95" << "|" << endl;
    cout << setw(9) << "C102" << "|" << setw(32) << "Computer Hardware" << "|" << setw(9) << "88" << "|" << endl;
    cout << setw(9) << "C1035243" << "|" << setw(32) << "Network" << "|" << setw(9) << "75" << "|" << endl;
    cout << "---------|--------------------------------|---------| " << endl;

    return 0;
}