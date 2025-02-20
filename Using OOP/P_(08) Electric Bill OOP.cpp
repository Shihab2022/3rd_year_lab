

/*Program to take input of a user name and consumed current units and print
 an electric bill which billing criteria is as follows
i) First 50 units has minimum charge 100tk
ii) Next 200 units cost 2.50 TK/unit
iii) Next 250 units cost 3.50 TK/unit
iv) Units above 500 are charged at a rate 5.00TK/unit
Make sure you implement the idea using user-defined function.*/

#include <iostream>
#include <iomanip>

using namespace std;

class electricBill
{
private:
    string fn, ln;
    double unit;

public:
    electricBill()
    {
        cout << "\nEnter your First & last name:\n";
        // getline(cin, name); // Use getline to read the full name, including spaces
        cin >> fn >> ln;

        cout << "Enter the consumed units: ";
        cin >> unit;
    }

    void Bill()
    {
        double bill = 0.0;
        if (unit <= 50)
        {
            bill = 100; // Minimum charge for first 50 units
        }
        else if (unit > 50 && unit <= 250)
        {
            bill = 100 + (unit - 50) * 2.5; // 2.50 TK/unit for next 200 units
        }
        else if (unit > 250 && unit <= 500)
        {
            bill = 100 + 200 * 2.5 + (unit - 250) * 3.5;
        }
        else
        {
            bill = 100 + 200 * 2.5 + 250 * 3.5 + (unit - 500) * 5.00; // 5.00 TK/unit for units above 500
        }
        cout << "\nMr./Ms." << fn << " " << ln << endl;
        cout << "Your Electric Bill is : " << bill << "TK." << endl;
    }
};

int main()
{
New:
    cout.precision(2);
    cout.setf(ios::fixed);
    electricBill January;
    January.Bill();
    int x;
    cout << "\nDo you want to calculate the bill for another person?\n";
    cout << "\nIf yes then pless 1 otherwise press 0\n";
    cin >> x;
    if (x == 1)
        goto New;
}