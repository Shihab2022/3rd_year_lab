

// Find factorial of a given number

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, x;

a:
    long long int fact = 1;
    cout << "\nPlease enter an non-negative integer number:\n";
    cin >> n;
    if (n < 0)
        cout << "Error! Factorial of a negative number doesn't exist";
    else
    {
        for (int i = 1; i <= n; i++)
            fact = fact * i;
        cout << "\nFactorial of the given number is: " << fact << endl;
    }

    cout << "\nDo you want to find factorial of another number?\n";
    cout << "\nIf yes then pless 1 otherwise press 0\n";
    cin >> x;
    if (x == 1)
        goto a;
}
