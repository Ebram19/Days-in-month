// File: Month in Days
//NAme of Programmer: Ebram Azer
//Requirments:Write a program that asks the user to enter the month(letting the user enter an integer in the range of 1 through 
//12) and the year.The program should then display the number of days in that month.Use the following criteria to identify leap years :  
//Determine whether the year is divisible by 100. If it is, then it is a leap year if and only if it is divisible by 400.
//For example, 2000 is a leap year but 2100 is not.
//If the year is not divisible by 100, then it is a leap year if and only if it is divisible by 4.
//For example, 2008 is a leap year but 2009 is not.


#include <iostream>

using namespace std;

// Function to check if a year is a leap year
bool isLeapYear(int year) {
    if (year % 100 == 0) {
        return year % 400 == 0; // Divisible by 400
    }
    else {
        return year % 4 == 0; // Divisible by 4
    }
}

// Function to get the number of days in a month
int daysInMonth(int month, int year) {
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        return 31; // Months with 31 days
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30; // Months with 30 days
    }
    else if (month == 2) {
        return isLeapYear(year) ? 29 : 28; // February
    }
    else {
        return 0; // Invalid month
    }
}

int main() {
    int month, year;

    // Ask the user for the month
    cout << "Enter a month (1–12): ";
    cin >> month;

    // Ask the user for the year
    cout << "Enter a year: ";
    cin >> year;

    // Check if the month is valid
    if (month >= 1 && month <= 12) {
        // Get the number of days in the month
        int days = daysInMonth(month, year);

        // Display the number of days
        cout << days << " days" << endl;
    }
    else {
        cout << "Please enter a valid month between 1 and 12." << endl;
    }

    return 0;
}
