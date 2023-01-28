// cpp program to implement the extentes euclidean algorithm
// for two integrs 'a' and 'b' extended euclidean algorithm
// find the gcd of 'a' and 'b' ,but also computes two integers
//'x' and 'y' such that ax+by=gcd(a,b)
#include <iostream>
using namespace std;

int gcdExtended(int a, int b, int &x, int &y)
{
    if (a == 0)
    {
        x = 0;
        y = 1;
        return b;
    }
    int x1, y1;
    int gcd = gcdExtended(b % a, a, x1, y1);
    x = y1 - (b / a) * x1;
    y = x1;
    return gcd;
}

int main()
{
    int a, b, x, y;
    cout << "\n\nEnter two relatively prime numner(i.e In ax+by enter a and b):- ";
    cin >> a >> b;
    int gcd = gcdExtended(a, b, x, y);
    cout << "\n\ngcd(" << a << ", " << b << ") = " << gcd << endl;
    cout << "\n\nCoefficients x and y are: " << x << " and " << y << endl
         << endl;
    cout << "Name:-Kailash Badu\n\nRoll no:-09";
    return 0;
}
