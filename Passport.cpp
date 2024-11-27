#include "Passport.h"

Passport::Passport(){}

string Passport::getSurname() {
    return ("Person " + surname);
}

void Passport::setRegion(int newRegion) {
    region = newRegion;
}

void Passport::setDateOfBirth(int newDateOfBirth) {
    dateofbirth = newDateOfBirth;
}

int Passport::getRegion() {
    return region;
}

int Passport::getDateOfBirth() {
    return dateofbirth;
}

Passport::Passport(string newSurname, int newCount, int newRegion, int newDateOfBirth) {
    surname = newSurname;
    count = newCount;
    region = newRegion;
    dateofbirth = newDateOfBirth;
}

void Passport::Show(Passport passports[], int arraySize) {
    int widths[6] = {20, 10, 25, 15, 25, 15};
    cout << "+";
    for (const auto& width : widths) {
        cout << setfill('-') << setw(width) << "" << "+";
    }
    cout << setfill(' ') << "\n";
    string headers[6] = {"Surname", "Count", "Region", "Date of birth", "Course", "University"};
    cout << "|";
    for (size_t i = 0; i < 6; i++) {
        cout << center(headers[i], widths[i]) << "|";
    }
    cout << "\n";

    cout << "+";
    for (const auto& width : widths) {
        cout << setfill('-') << setw(width) << "" << "+";
    }
    cout << setfill(' ') << "\n";
    for (int i = 0; i < arraySize; i++) {
        cout << "|";
        cout << center(passports[i].getSurname(), widths[0]) << "|"
             << center(to_string(passports[i].getCount()), widths[1]) << "|"
             << center(to_string(passports[i].getRegion()), widths[4]) << "|"
             << center(to_string(passports[i].getDateOfBirth()), widths[5]) << "|"
             << center("", widths[2]) << "|"
             << center("", widths[3]) << "|\n";
        cout << "+";
        for (const auto& width : widths) {
            cout << setfill('-') << setw(width) << "" << "+";
        }
        cout << setfill(' ') << "\n";
    }

    do {

    } while (cin.get() != '\n');
}
