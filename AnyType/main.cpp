// AnyType.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <typeinfo>
#include "AnyType.h"

int main()
{
    //std::cout << "Hello World!\n";
    ////int a = 5;
    //std::nullptr_t st;
    //unsigned long long int a = 16172347921399647917;
    //bool c = 0;
    //std::cout << typeid(long double).name() << "     " << a;
    AnyType anyType;

    anyType = 5;
    cout << anyType.GetType() << ": \t" << anyType.ToInt() << endl;

    anyType = true;
    cout << anyType.GetType() << ": \t" << anyType.ToBool() << endl;

    anyType = 'h';
    cout << anyType.GetType() << ": \t" << anyType.ToChar() << endl;

    try
    {
        cout << anyType.GetType() << "  :" << anyType.ToInt() << endl;
    }
    catch (const std::exception& ex)
    {
        cout << ex.what();
    }

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
