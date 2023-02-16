// c++ program to compute factorial of a number using recursion//
#include <iostream>
using namespace std;

int Factorial(int n)
{
    if (n <= 1)
        return 1;
    return n * Factorial(n - 1);
}

int main()
{
    int n;
    cout << "\n\nEnter a number: ";
    cin >> n;
    cout << "\n\nThe factorial of " << n << " is " << Factorial(n) << endl;
    cout << "\n\nName:Kailash Badu\n\nRoll No:-09\n"
         << endl;

    return 0;
}
