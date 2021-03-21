// ProgrammingAssignment1A //
// Rob Shiner //

#include <iostream>
using namespace std;

// Create Main //
int main()
{
    // Declare Variables //
    int secondsInput;
    int totalSeconds;
    int totalHours;
    int totalMins;
    int theMins;

    // Display Message //
    cout << "*******************************************************************" << endl;
    cout << "******************* Welcome to my first program *******************" << endl;
    cout << "Convert a large number of seconds into hours, minutes, and seconds." << endl;
    cout << "*******************************************************************" << endl;
    cout << endl;

    // Get Input From User //
    cout << "Please enter a large number of seconds: ";
    cin >> secondsInput;

    // Calculate totalSeconds //
    totalSeconds = secondsInput % 60;

    // Calculate totalMins //
    theMins = secondsInput / 60;
    totalMins = theMins % 60;

    // Calculate totalHours //
    totalHours = theMins / 60;

    // Display Output To User //
    cout << "The number of hours in the number is: " << totalHours << endl;
    cout << "The number of minutes in the number is: " << totalMins << endl;
    cout << "The number of seconds in the number is: " << totalSeconds << endl;

    return 0;

}