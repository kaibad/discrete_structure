// cpp program to illustrates the set complement
#include <iostream>
using namespace std;
int main()

{
    int num1, num2, i, j, flag;

    cout << "\n\n\nWhat is the cardinality od the universal set?:-";
    cin >> num1;
    cout << endl;
    char arr1[num1];
    cout << "Enter the elments of the universal set:-" << endl;
    for (i = 0; i < num1; i++)
    {
        cin >> arr1[i];
    }

    cout << "What is the cardinality od the  set(i.e set A)?:-";
    cin >> num2;
    cout << endl;
    char arr2[num2];
    cout << "Enter the elments of the set A:-" << endl;
    for (i = 0; i < num2; i++)
    {
        cin >> arr2[i];
    }
    cout << endl;
    cout << "Complement of set A is :-";
    cout << "{ ";
    for (i = 0; i < num1; i++)
    {
        for (j = 0; j < num2; j++)
        {
            if (arr1[i] == arr2[j])
            {

                break;
            }
        }
        if (j == num2)
        {
            cout << arr1[i] << " ,";
        }
    }
    cout << "}";
    cout << "\n\n\nNAME:-KAILASH BADU\nROLL NO.:-9" << endl;
}