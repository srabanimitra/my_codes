#include<bits/stdc++.h>
using namespace std;

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int getDaysInMonth(int month, int year) {
    if (month == 2) {
        return isLeapYear(year) ? 29 : 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    } else {
        return 31;
    }
}

string toUpperCase(const string& str) {
    string result = str;
    transform(result.begin(), result.end(), result.begin(), ::toupper);
    return result;
}


void printCalendar(int date, int month, int year, const string& day) {
    cout << "|---------------------------|" << endl;
    cout << "|Sun|Mon|Tue|Wed|Thu|Fri|Sat|" << endl;
    cout << "|---------------------------|" << endl;

    int dayIndex;
    const string daysOfWeek[] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};

    for (dayIndex = 0; dayIndex < 7; ++dayIndex) {
        if (toUpperCase(day) == daysOfWeek[dayIndex]) {
            break;
        }
    }

    int startDay = (date - 1 + 7 - dayIndex) % 7;

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
    cout << endl;
    }

int main() {

    string input;

    getline(cin, input);
    stringstream ss(input);
    int date, month, year;
    string day;

    ss >> date;
    ss.ignore();
    ss >> month;
    ss.ignore();
    ss >> year;
    ss >> day;

    printCalendar(date, month, year, day);


    return 0;
}
