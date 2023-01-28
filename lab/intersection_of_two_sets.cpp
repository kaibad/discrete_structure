#include <iostream>
using namespace std;

int main()
{
    int n1, n2, i, j;
    cout << "\n\n\nWhat is the cardinality of first set(i.e set A)?:-";
    cin >> n1;

    /* declaring arr1 of size n1 */
    char arr1[n1];

    /* Enter distinct elements */
    cout << "\nEnter the elements of the 1st array: ";
    for (i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }

    cout << "\nWhat is the cardinality of second set(i.e set B)?: ";
    cin >> n2;

    /* declaring arr2 of size n2 */
    char arr2[n2];

    /* Enter distinct elements */
    cout << "\nEnter the elements of the 2nd array: ";
    for (i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }

    /* printing elements that are common in both the arrays */
    cout << "\nThe intersection of the two arrays: {  ";
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << "";
            }
        }
    }
    cout << "}";

    cout << "\n\n\nNAME:-KAILASH BADU\nROLL NO.:-9" << endl;

    return 0;
}