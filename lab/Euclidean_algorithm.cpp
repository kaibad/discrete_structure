// cpp program to implement Eucliadian algorithm
// gcd(a,b)=gcd(b,r) where r=a%b i.e reaminder
#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main()
{
    int a, b;
    cout << "\n\nEnter the two relatively prime numher:-";
    cin >> a >> b;
    cout << "\n\nGCD of " << a << " and " << b << " is: " << gcd(a, b) << endl
         << endl;
    cout << "Name:-Kailash Badu\n\nRoll no:-09";

    return 0;
}
