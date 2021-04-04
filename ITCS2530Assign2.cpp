// Programming Assignment 2 //
// Rob Shiner //

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Constant Variables //
const double CANHOLD = 2.76;
const double THECOST = 4.12;
const double THEPROFIT = 1.45;

// Main Function //
int main()
{
    // Declare Variables //
    double cheeseInput;
    int theContainer;
    double totalCost;
    double totalProfit;
   
    // Display Message //
    cout << "***************************************************************************" << endl;
    cout << "*********************** Welcome to my Cheesy Program **********************" << endl;
    cout << "***************************************************************************" << endl;
    cout << endl;

    // Get Input From User //
    cout << "Please enter the total number of kilograms of cheese produced: ";
    cin >> cheeseInput;

    // Calculate The Amount Of Containers That Can Hold The Cheese //
    theContainer = cheeseInput / CANHOLD + 1;

    // Calculate The Cost Of Producing The Cheese //
    totalCost = theContainer * THECOST;

    // Calculate The Profit Of The Cheese //
    totalProfit = theContainer * THEPROFIT;

    // Convert To A String //
    string s1 = "The number of containers to hold the cheese is: "; 
    string s2 = "The cost of producing " + to_string(theContainer) + " container(s) of cheese is: ";
    string s3 = "The profit from producing " + to_string(theContainer) + " container(s) of cheese is : ";

    // Display Properly Alligned Output In A Column To User //
    cout << setw(0) << left << s1 << setw(27) << right << fixed << setprecision(2) << theContainer << endl;
    cout << setw(0) << left << s2 << setw(16) << right << '$' << fixed << setprecision(2) << totalCost << endl;
    cout << setw(0) << left << s3 << setw(11)<< right << '$' << fixed << setprecision(2) << totalProfit << endl;

    return 0;
}

