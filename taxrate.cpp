#include <cstdlib>
#include <iomanip>
#include <iostream>

using namespace std;

const float TAX_RATE = .04;

int main()
{
    //declare vars
    string name;
    float price = 4.50;
    int qty = 0;
    float charge = 0, taxCharge = 0;

    //get user input
    cout << "Enter the number you wish to order : \n";
    cin >> qty;

    //format output
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);

    // calculations
    charge = price * qty;
    // tax charged
    taxCharge = charge * TAX_RATE;
    cout << "The tax charged is : €" << setprecision(2) << taxCharge << endl;
    // total charged
    charge = charge + taxCharge;
    cout << "The total charge is : €" << setprecision(2) << charge << endl;
}