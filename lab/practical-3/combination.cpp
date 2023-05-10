//  a program to read the values of ‘n’ and ‘r’ from users and calculate combinations
#include <iostream>
using namespace std;

int main()
{
    int n, r, combination = 1;

    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Enter the value of r: ";
    cin >> r;

    for (int i = 1; i <= r; i++)
    {
        combination *= n - r + i;
        combination /= i;
    }

    cout << "The combination of " << n << " and " << r << " is: " << combination << endl
         << endl;
    cout << "Name:-Kailash Badu" << endl;
    cout << "Roll No.:- 09" << endl;

    return 0;
}
