

// Largest and smallest number that can be formed using digits of a given number 
// Using User Defined functions

#include<iostream>
#include<string>
using namespace std;

// Function to find the smallest number by sorting digits in ascending order
void SmallestNum(string num, int size)
{
    for(int i = 0; i < size; i++)
    {
        for(int j = i + 1; j < size; j++)
        {
            if(num[i] > num[j])
            {
                char temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    cout << "\nThe smallest number is: ";
    for(int i = 0; i < size; i++)
    {
        cout << num[i];
    }
    cout << endl;
}

// Function to find the largest number by sorting digits in descending order
void LargestNum(string num, int size)
{
    for(int i = 0; i < size; i++)
    {
        for(int j = i + 1; j < size; j++)
        {
            if(num[i] < num[j])
            {
                char temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    cout << "\nThe largest number is: ";
    for(int i = 0; i < size; i++)
    {
        cout << num[i];
    }
    cout << endl;
}

int main()
{
    char choice;  // Character to store user's choice for running the program again
    do
    {
        string number;  // Variable to store the input number as a string
        cout << "\nPlease Enter a positive integer number: ";
        cin >> number;
        int size = number.size();  // Get the size of the string using the inbuilt 'size()' function
        
        SmallestNum(number, size);  // Call function to find the smallest number
        LargestNum(number, size);  // Call function to find the largest number
        
        // Prompt the user to decide if they want to run the program again
        cout << "\nIf you want to run the code again then press Y/y, otherwise press other characters: \n";
        cin >> choice;
    } while(tolower(choice) == 'y');  // Continue if the user enters 'y' or 'Y'

    return 0;
}
