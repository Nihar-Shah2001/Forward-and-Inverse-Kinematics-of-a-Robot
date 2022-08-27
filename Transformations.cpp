// Transformations.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<math.h>
using namespace std;
#define pi 3.14159265
int main()
{
    std::cout << "Hello World!\n";
    char ch;
    double angle, l, m, n;
    long double Transform[4][4] = { 0 }, P[4] = { 0 },k=0;
    P[3] = 1;
Restart:
    cout << "\n";
    cout << "\nSelect one of the below choices. \n";
    cout << " 1. Rotation about X axis: \n";
    cout << " 2. Rotation about Y Axis: \n";
    cout << " 3. Rotation about Z Axis: \n";
    cout << "Enter your choice: ";
    cin >> ch;
    switch (ch)
    {
    case'1':
        cout << "Please enter the degree of Rotation(in degrees): ";
        cin >> angle;
        cout << "Enter the Translation in X Axis: ";
        cin >> l;
        cout << "Enter the Translation in Y Axis: ";
        cin >> m;
        cout << "Enter the Translation in Z Axis: ";
        cin >> n;
        Transform[0][0] = 1;
        Transform[0][3] = l;
        Transform[1][1] = cos(angle * pi / 180);
        Transform[1][2] = -1*sin(angle * pi / 180);
        Transform[1][3] = m;
        Transform[2][1] = sin(angle * pi / 180);
        Transform[2][2] = cos(angle * pi / 180);
        Transform[2][3] = n;
        Transform[3][3] = 1;
        for(int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                cout << "\t" << Transform[i][j] << "\t";
            }
            cout << "\n";
        }
        break;
    case'2':
        cout << "Please enter the degree of Rotation(in degrees): ";
        cin >> angle;
        cout << "Enter the Translation in X Axis: ";
        cin >> l;
        cout << "Enter the Translation in Y Axis: ";
        cin >> m;
        cout << "Enter the Translation in Z Axis: ";
        cin >> n;
        Transform[0][0] = cos(angle * pi / 180);
        Transform[0][2] = sin(angle * pi / 180);
        Transform[0][3] = l;
        Transform[1][1] = 1;
        Transform[1][3] = m;
        Transform[2][0] = -1 * sin(angle * pi / 180);
        Transform[2][2] = cos(angle * pi / 180);
        Transform[2][3] = n;
        Transform[3][3] = 1;
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                cout << "\t" << Transform[i][j] << "\t";
            }
            cout << "\n";
        }
        break;
    case'3':
        cout << "Please enter the degree of Rotation(in degrees): ";
        cin >> angle;
        cout << "Enter the Translation in X Axis: ";
        cin >> l;
        cout << "Enter the Translation in Y Axis: ";
        cin >> m;
        cout << "Enter the Translation in Z Axis: ";
        cin >> n;
        Transform[0][0] = cos(angle * pi / 180);
        Transform[0][1] = -1 * sin(angle * pi / 180);
        Transform[0][3] = l;
        Transform[1][0] = sin(angle * pi / 180);
        Transform[1][3] = m;
        Transform[1][1] = cos(angle * pi / 180);
        Transform[2][2] = 1;
        Transform[2][3] = n;
        Transform[3][3] = 1;
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                cout << "\t" << Transform[i][j] << "\t";
            }
            cout << "\n";
        }
        break;
    default:
        cout << "You have entered a choice: ";
        goto Restart;
    }
    cout << "\nEnter the X Coordinate of P Vector: ";
    cin >> P[0];
    cout << "Enter the Y Coordinate of P Vector: ";
    cin >> P[1];
    cout << "Enter the Z Coordinate of P Vector: ";
    cin >> P[2];
    cout << "\nThe Matrix After Transformation will be: ";
    cout << "\n";
    for (int i = 0; i < 4; i++)
    {
        k = 0;
        for (int j = 0; j < 4; j++)
        {
            Transform[i][j] = Transform[i][j] * P[j];
            k += Transform[i][j];
        }
        cout << "\t" << k;
        cout << "\n";
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
