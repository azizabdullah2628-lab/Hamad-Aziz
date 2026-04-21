// Name: hammad aziz
// Department: Electrical Engineering (Power)
// Registration No: BF25NWELE0715// Name: maaz wahab
// Department: Electrical Engineering (Power)
// Registration No: BF25NWELE0719
// Section: A

#include <iostream>
using namespace std;

int main()
{
    int num;  // variable to store number

    cout << "Enter a Number: ";
    cin >> num;  // read number from user

    if (num > 0 && num < 100)  // check if number is >0 and <100
        cout << "Number is greater than zero and less than hundred" << endl;
    else
        cout << "The number does not meet the conditions" << endl;

    return 0;  // program ends
}

// Section: A

#include <iostream>
using namespace std;

int main()
{
    int a, b;  // variables to store numbers

    cout << "Enter the first number: ";
    cin >> a;  // read first number

    cout << "Enter the second number: ";
    cin >> b;  // read second number

    if (a == b)  // check equality
        cout << "Both numbers are equal" << endl;
    if (a > b)   // check if first is greater
        cout << "First number is greater than second" << endl;
    if (a < b)   // check if first is smaller
        cout << "First number is less than second" << endl;

    return 0;  // program ends
}


