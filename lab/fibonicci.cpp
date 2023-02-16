// c++ program to display Fibonacci numbers using recursion//
#include <iostream>
using namespace std;

int Fibonacci(int n)
{
    if (n <= 1)
        return n;
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int main()
{
    int n;
    cout << "\n\nEnter the number of terms: ";
    cin >> n;
    cout << "\n\nThe first " << n << " Fibonacci numbers are: ";
    for (int i = 0; i < n; i++)
    {
        cout << Fibonacci(i) << " ";
    }
    cout << endl;
    cout << "\n\nName:Kailash Badu\n\nRoll No. : 09\n"
         << endl;

    return 0;
}
