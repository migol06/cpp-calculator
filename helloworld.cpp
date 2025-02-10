#include <iostream>
using namespace std;

int main()
{
    int num1;
    int num2;
    int operation;
    int ans = 0;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operation (1-addition, 2-subtraction, 3-division, 4-multiplication, 5-modulo): ";
    cin >> operation;

    cout << "Enter second number: ";
    cin >> num2;

    switch (operation)
    {
    case 1:
        ans = num1 + num2;
        break;
    case 2:
        ans = num1 - num2;
        break;
    case 3:
        ans = num1 / num2;
        break;
    case 4:
        ans = num1 * num2;
        break;
    default:
        cout << "Invalid Operation";
        break;
    }

    cout << "Result: " << ans;
}
