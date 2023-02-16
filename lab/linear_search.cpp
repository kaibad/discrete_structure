// c++ program to perform Linear Search using recursion
#include <iostream>
using namespace std;
int LinearSearch(int arr[], int n, int key, int index)
{
    if (index == n)
        return -1;
    if (arr[index] == key)
        return index;
    return LinearSearch(arr, n, key, index + 1);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;
    cout << "\n\nEnter the key to search for: ";
    cin >> key;
    int result = LinearSearch(arr, n, key, 0);
    if (result == -1)
        cout << "\n\nKey not found in the array" << endl;
    else
        cout << "\n\nKey found at index " << result << endl;
    cout << "\n\nName:Kailash Badu" << endl;
    cout << "\nRoll No. : 09\n"
         << endl;
    return 0;
}
