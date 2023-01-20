// cpp program to illustrate union of two sets
#include <iostream>
using namespace std;
int main()
{
    int num1, num2, i, j, flag;
    cout << "\n\n\nWhat is the Cardinality of the first set(i.e set A) ?:-";
    cin >> num1;
    cout << endl;
    char arr1[num1];
    cout << "what are the elements of set A:-" << endl;
    for (i = 0; i < num1; i++)
    {
        cin >> arr1[i];
    }
    cout << endl;
    cout << "What is the Cardinality of the second set(i.e set B) ?:-";
    cin >> num2;
    cout << endl;
    char arr2[num2];
    cout << "what are the elements of set B:-" << endl;
    for (i = 0; i < num2; i++)
    {
        cin >> arr2[i];
    }
    cout << endl;
    cout << "\n\n Union of the two sets:-";
    cout << "{ ";
    for (i = 0; i < num1; i++)
    {
        cout << arr1[i] << " ";
    }
    for (j = 0; j < num2; j++)
    {
        flag = 0;
        for (i = 0; i < num1; i++)
        {
            if (arr1[i] == arr2[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag != 1)
        {
            cout << arr2[j] << " , ";
        }
    }
    cout << " }";
    cout << "\n\n\nNAME:-KAILASH BADU\nROLL NO.:-9" << endl;
}