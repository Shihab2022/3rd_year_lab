

// A program to sort the entries of an array in ascending and descending order..

#include <iostream>
using namespace std;
int main()
{
New:
    int n, i, j, temp, x;
    cout << "\n Please enter the length of the array: ";
    cin >> n;
    int a[n];
    cout << "\n Please enter the elements of the array:\n";
    for (i = 0; i < n; i++)
        cin >> a[i];

    // For ascending order we have to put the following condition
    for (i = 0; i < n; i++)
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    // Hence the ascending order for the given entries will be...
    cout << "\n The ascending order is:\n";
    for (i = 0; i < n; i++)
        cout << a[i] << " ";

    // For descending order we have to put the following condition
    for (i = 0; i < n; i++)
        for (j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    // Hence the descending order for the given entries will be...
    cout << "\n The descending order is:\n";
    for (i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << "\nDo you want to check with new values?\n";
    cout << "\nIf yes then pless 1 otherwise press 0:\n";
    cin >> x;
    if (x == 1)
        goto New;

    return 0;
}
