#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>
#include<windows.h>

using namespace std;

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

void funcADD(double arith[], int size)
{
    double ADD = 0;
    int count = 1;

    for(int i = 0; i < size; i++)
    {
        cout << "Enter " << count << " Number (0 to stop): ";
        cin >> arith[i];

        if(arith[i] == 0){
        	SetConsoleTextAttribute(hConsole, 4);
            cout << "Invalid Input!" << endl;
            SetConsoleTextAttribute(hConsole, 7);
            exit(0);
        }
        else{
        ADD += arith[i];
        count++;
    }
    }

    cout << "Sum is : " << ADD << endl;
     SetConsoleTextAttribute(hConsole, 32);
    cout << "Operation performed successfully." << endl;
    SetConsoleTextAttribute(hConsole, 7);
}

void funcSUB(double arith[], int size)
{
    double SUB;
    int count = 1;

    cout << "Enter " << count << " Number: ";
    cin >> arith[0];

    SUB = arith[0];

    for(int i = 1; i < size; i++)
    {
        cout << "Enter " << count + 1 << " Number (0 to stop): ";
        cin >> arith[i];

        if(arith[i] == 0)
        {
        	SetConsoleTextAttribute(hConsole, 4);
            cout << "Invalid Input!" << endl;
            SetConsoleTextAttribute(hConsole, 7);
            exit(0);
    }
       else{
        SUB -= arith[i];
        count++;
    }
    }

    cout << "Subtraction is : " << SUB << endl;
     SetConsoleTextAttribute(hConsole, 32);
    cout << "Operation performed successfully." << endl;
    SetConsoleTextAttribute(hConsole, 7);
}

void funcMUL(double arith[], int size)
{
    double MUL = 1;
    int count = 1;

    for(int i = 0; i < size; i++)
    {
        cout << "Enter " << count << " Number (0 to stop): ";
        cin >> arith[i];

        if(arith[i] == 0){
        SetConsoleTextAttribute(hConsole, 4);
            cout << "Invalid Input!" << endl;
            SetConsoleTextAttribute(hConsole, 7);
            exit(0);
        }
       else{
        MUL *= arith[i];
        count++;
    }
    }

    cout << "Product is : " << MUL << endl;
     SetConsoleTextAttribute(hConsole, 32);
    cout << "Operation performed successfully." << endl;
    SetConsoleTextAttribute(hConsole, 7);
}

void funcDIV(double arith[], int size)
{
    double DIV;
    int count = 1;

    cout << "Enter " << count << " Number: ";
    cin >> arith[0];

    DIV = arith[0];

    for(int i = 1; i < size; i++)
    {
        cout << "Enter " << count + 1 << " Number (0 to stop): ";
        cin >> arith[i];

        if(arith[i] == 0){
		SetConsoleTextAttribute(hConsole, 4);
            cout << "Invalid Input!" << endl;
            SetConsoleTextAttribute(hConsole, 7);
            exit(0);
    }
    else{

        DIV /= arith[i];
        count++;
    }
    }

    cout << "Division is : " << DIV << endl;

    SetConsoleTextAttribute(hConsole, 32);
    cout << "Operation performed successfully." << endl;
    SetConsoleTextAttribute(hConsole, 7);
}

int main()
{
    double arith[100];
    char option;

    cout << "Enter the Operation you want to perform (+,-,*,/): ";
    cin >> option;

    switch(option)
    {
        case '+':
            funcADD(arith, 100);
            break;

        case '-':
            funcSUB(arith, 100);
            break;

        case '*':
            funcMUL(arith, 100);
            break;

        case '/':
            funcDIV(arith, 100);
            break;

        default:
            SetConsoleTextAttribute(hConsole, 4);
            cout << "Invalid Input!" << endl;
            SetConsoleTextAttribute(hConsole, 7);
    }

    return 0;
}
