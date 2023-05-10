// c++  program to read the values of ‘n’ and ‘r’ from users and calculate permutations

#include <iostream>
using namespace std;

int main()
{
    int n, r, permutation = 1;

    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Enter the value of r: ";
    cin >> r;

    for (int i = n; i > n - r; i--)
    {
        permutation *= i;
    }

    cout << "The permutation of " << n << " and " << r << " is: " << permutation << endl
         << endl;

    cout << "Name:-Kailash Badu" << endl;
    cout << "Roll No.:- 09" << endl;

    return 0;
}
