// cpp program to implement floor and ceiling function
//  C++ program to demonstrate floor function
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    char continueProgram = 'y';

    while (continueProgram == 'y')
    {
        double num;
        cout << "\n  \n  Enter a number: ";
        cin >> num;

        int choice;
        cout << "Enter \n\t 1:: for floor \n\t 2:: for ceiling: " << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Floor of " << num << " is " << floor(num) << endl;
            break;
        case 2:
            cout << "Ceiling of " << num << " is " << ceil(num) << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
        }
        cout << "\n\nWould you like to continue? (y/n) ";
        cin >> continueProgram;
    }
    cout << "Name:-Kailash Badu\n\nRoll no:-09";

    return 0;
}
