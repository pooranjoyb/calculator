#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <strings.h>
#include <stdlib.h>

using namespace std;
int main()
{
    char a;
    float c, r;
start:
    system("CLS");
    cout << "\nWelcome to the calculator program :) ";
    cout << "\nPress '+' for Addition, '-' for Substraction, '*' for Multiplication & '/' for Division = ";
    cin >> a;
    if (a == '+')
    {
        char d;
        float n, sum;
        cout << "\nEnter the first number for addition = ";
        cin >> c;
        cout << "\nEnter the second number for addition = ";
        cin >> sum;
        r = c + sum;
        cout << "\nThe result is = " << r;
    l1:
        cout << "\nAdd Another ? (y/n) = ";
        cin >> d;
        if (d == 'y')
        {
            while (d == 'y')
            {

                cout << "\nEnter your number = ";
                cin >> n;
                r = r + n;
                cout << "\nThe result is = " << r;
                cout << "\nWanna Add again ? (y/n) = ";
                cin >> d;
            }
        }
        if (d == 'n')
        {
            cout << "\nThanks for using Calculator. Your final result is = " << r << endl;
        }
        else
        {
            cout << "Invalid Input";
            goto l1;
        }
    }
    else if (a == '-')
    {
        float a1, b1, f;
        char c;
        cout << "\nEnter the first number for substraction = ";
        cin >> a1;
        cout << "\nEnter the second number for substraction = ";
        cin >> b1;
        r = a1 - b1;
        cout << "\nThe result is = " << r;
        cout << "\nSubstract again? (y/n) = ";
        cin >> c;
        if (c == 'y')
        {
            while (c == 'y')
            {

                cout << "\nEnter your number = ";
                cin >> f;
                r = r - f;
                cout << "\nThe result is = " << r;
                cout << "\nWanna Substract again ? (y/n) = ";
                cin >> c;
            }
        }
        if (c == 'n')
        {
            cout << "\nThanks for using Calculator. Your final result is = " << r << endl;
        }
    }
    else if (a == '*')
    {
        float a2, b2, f;
        char c;
        cout << "\nEnter the first number for multiplication = ";
        cin >> a2;
        cout << "\nEnter the second number for multiplication = ";
        cin >> b2;
        r = a2 * b2;
        cout << "\nThe result is = " << r;
        cout << "\nMultiply again? (y/n) = ";
        cin >> c;
        if (c == 'y')
        {
            while (c == 'y')
            {

                cout << "\nEnter your number = ";
                cin >> f;
                r = r * f;
                cout << "\nThe result is = " << r;
                cout << "\nWanna Multiply again ? (y/n) = ";
                cin >> c;
            }
        }
        if (c == 'n')
        {
            cout << "\nThanks for using Calculator. Your final result is = " << r << endl;
        }
    }
    else if (a == '/')
    {
        float a3, b3, f;
        char c;
        cout << "\nEnter the first number for division = ";
        cin >> a3;
        cout << "\nEnter the second number for division = ";
        cin >> b3;
        if (b3 > 0)
        {

            r = a3 / b3;
            cout << "\nThe result is = " << r;
            cout << "\nDivide again? (y/n) = ";
            cin >> c;
            if (c == 'y')
            {
                while (c == 'y')
                {

                    cout << "\nEnter your number = ";
                    cin >> f;
                    r = r / f;
                    cout << "\nThe result is = " << r;
                    cout << "\nWanna Divide again ? (y/n) = ";
                    cin >> c;
                }
            }
            if (c == 'n')
            {
                cout << "\nThanks for using Calculator. Your final result is = " << r << endl;
            }
        }
        else
        {
            char a;
        l4:
            cout << "\nYou have entered the wrong alphabet";
            cout << "\nDo you want to start again ? (y/n) = ";
            cin >> a;
            if (a == 'y')
            {
                goto start;
            }
            if (a == 'n')
            {
                cout << "\nThanks for using Calculator.\n";
            }
            else
            {
                goto l4;
            }
        }
    }
    system("PAUSE");
    return 0;
}