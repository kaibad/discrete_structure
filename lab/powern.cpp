// c++ program to compute Recursive Algorithm for an using recursion//
#include <iostream>
using namespace std;

int Power(int a, int n)
{
    if (n == 0)
        return 1;
    return a * Power(a, n - 1);
}

int main()
{
    int a, n;
    cout << "\n\nEnter the base :- ";
    cin >> a;
    cout << "\nEnter the power:-";
    cin >> n;
    cout << "\n"
         << a << "^" << n << " = " << Power(a, n) << endl;
    cout << "\n\nName:Kailash Badu\n\nRoll no.:-09 \n"
         << endl;

    return 0;
}
