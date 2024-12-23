#include<bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;

// Function to determine if a year is a leap year
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Function to get the number of days in a month
int getDaysInMonth(int month, int year) {
    if (month == 2) {
        return isLeapYear(year) ? 29 : 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    } else {
        return 31;
    }
}

// Function to convert a string to uppercase
string toUpperCase(const string& str) {
    string result = str;
    transform(result.begin(), result.end(), result.begin(), ::toupper);
    return result;
}

// Function to print the calendar for a given month and year
void printCalendar(int date, int month, int year, const string& day) {
    cout << "|---------------------------|" << endl;
    cout << "|Sun|Mon|Tue|Wed|Thu|Fri|Sat|" << endl;
    cout << "|---------------------------|" << endl;

    // Map the input day to an index (0 for Sunday, 1 for Monday, etc.)
    int dayIndex;
    const string daysOfWeek[] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};

    for (dayIndex = 0; dayIndex < 7; ++dayIndex) {
        if (toUpperCase(day) == daysOfWeek[dayIndex]) {
            break;
        }
    }

    // Calculate the starting day of the month with the correct offset
    int startDay = (date - 1 + 7 - dayIndex) % 7;

    // Print the calendar for 5 rows
    for (int i = 0; i < 5; ++i) {
        cout << "|";
        for (int j = 0; j < 7; ++j) {
            int dayNumber = i * 7 + j - startDay + 1;
            if (dayNumber >= 1 && dayNumber <= getDaysInMonth(month, year)) {
                cout << setw(3) << dayNumber << "|";
            } else {
                cout << setw(3) << "-" << "|";
            }
        }
        cout << endl << "|---------------------------|" << endl;
    }
    cout << endl; // Blank line after each test case
}

int main() {
    string input;

    // Input date and day as a string
    cout << "Enter date and day (DD/MM/YYYY DayName): ";
    getline(cin, input);

    // Parse the input string
    stringstream ss(input);
    int date, month, year;
    string day;

    ss >> date;
    ss.ignore(); // Ignore the '/' separator
    ss >> month;
    ss.ignore(); // Ignore the '/' separator
    ss >> year;
    ss >> day;

    // Print the calendar
    printCalendar(date, month, year, day);

    return 0;
}
