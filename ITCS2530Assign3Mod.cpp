// ITCS2530Assign3.cpp //

// Write a Item Shipping Calculator program that does the following ... //
// Prompt and retrieve the following input from the user(through the console) : //
// Item name //
// Is the item fragile (add in $2.00 if the item is fragile) //
// The order total (without shipping) //
// The destination to which the item will be shipped (USA, Canada, Australia, Saturn) //
// If the item is fragile add $2.00 to the shipping cost //


#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <algorithm>
#include <fstream>
using namespace std;

// Constant variable //
const double FRAGILEPRICE = 2.00;

// Main function //
int main()
{
    // Declare ofstream //
    ofstream outStream;

    // Declare variables //
    string itemName, thePlace, isFragile;
    double inputTotal, shipTotal;

    // Iniitialize variables //
    double shipCost = 0.00;

    // Display Message //
    cout << ".............................................." << endl;
    cout << "ITCS 2530 - Programming Assignment for week #3" << endl;
    cout << ".............................................." << endl;
    cout << endl;

    // Get input from user //
    cout << "Please enter the item name (no spaces)" << right << setw(11) << setfill('.') << ":";
    cin >> itemName;

    // Convert into uppercase //
    transform(itemName.begin(), itemName.end(), itemName.begin(), std::toupper);

    // Get unput from user //
    cout << "Is the item fragile? (y=yes/n=no)" << right << setw(16) << setfill('.') << ":";
    cin >> isFragile;

    // See if item is fragile or not //
    if (isFragile == "y" || isFragile == "Y") {
        shipCost += FRAGILEPRICE;
    }
    else if (isFragile == "n" || isFragile == "N") {
        shipCost += 0;
    }
    else {
        cout << "Invalid entry, exiting";
        return 1;
    }
    // Get input from user //
    cout << "Please enter your order total" << right << setw(20) << setfill('.') << ":";
    cin >> inputTotal;

    // Get input from user //
    cout << "Please enter destination. (usa/can/aus/sat)" << right << setw(6) << setfill('.') << ":";
    cin >> thePlace;
    cout << endl;

    // Convert into uppercase //
    transform(thePlace.begin(), thePlace.end(), thePlace.begin(), std::toupper);

    // Determine shipping cost based on price and location //
    if (inputTotal <= 50.00) {

        if (thePlace == "usa" || thePlace == "USA") {
            shipCost += 6.00;
        }
        else if (thePlace == "can" || thePlace == "CAN") {
            shipCost += 8.00;
        }
        else if (thePlace == "aus" || thePlace == "AUS") {
            shipCost += 10.00;
        }
        else if (thePlace == "sat" || thePlace == "SAT") {
            shipCost += 1000000000.00;
        }
        else {
            cout << "Invalid entry, exiting";
            return 1;
        }
    }

    // Determine shipping cost based on price and location //
    else if (50.00 < inputTotal && inputTotal <= 100.00) {

        if (thePlace == "usa" || thePlace == "USA") {
            shipCost += 9.00;
        }
        else if (thePlace == "can" || thePlace == "CAN") {
            shipCost += 12.00;
        }
        else if (thePlace == "aus" || thePlace == "AUS") {
            shipCost += 14.00;
        }
        else if (thePlace == "sat" || thePlace == "SAT") {
            shipCost += 1000000000.00;
        }
        else {
            cout << "Invalid entry, exiting";
            return 1;
        }
    }

    // Determine shipping cost based on price and location //
    else if (100.00 < inputTotal && inputTotal <= 150.00) {

        if (thePlace == "usa" || thePlace == "USA") {
            shipCost = 12.00;
        }
        else if (thePlace == "can" || thePlace == "CAN") {
            shipCost = 15.00;
        }
        else if (thePlace == "aus" || thePlace == "AUS") {
            shipCost = 17.00;
        }
        else if (thePlace == "sat" || thePlace == "SAT") {
            shipCost += 1000000000.00;
        }
        else {
            cout << "Invalid entry, exiting";
            return 1;
        }
    }

    // If over $150.00 //
    else {
        shipCost += 0;
    }

    // Calculate total shipping costs //
    shipTotal = inputTotal + shipCost;


    // Display output to user //
    cout << "Your item is" << right << setw(36) << setfill('.') << itemName << endl;
    cout << "Your shipping cost is" << right << setw(19) << setfill('.') << "$" << fixed << setprecision(2) << shipCost << endl;
    cout << "You are shipping to" << right << setw(23) << setfill('.') << thePlace << endl;
    cout << "Your total shipping costs are" << right << setw(11) << setfill('.') << "$" << fixed << setprecision(2) << shipTotal << endl;

    // Open File //
    outStream.open("Order.txt");

    // Output To File //
    outStream << "Your item is" << right << setw(36) << setfill('.') << itemName << endl;
    outStream << "Your shipping cost is" << right << setw(19) << setfill('.') << "$" << fixed << setprecision(2) << shipCost << endl;
    outStream << "You are shipping to" << right << setw(23) << setfill('.') << thePlace << endl;
    outStream << "Your total shipping costs are" << right << setw(11) << setfill('.') << "$" << fixed << setprecision(2) << shipTotal << endl;

    // Close File //
    outStream.close();

    return 0;


}

