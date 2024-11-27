#include "StudCard.h"

StudCard::StudCard(){}

string StudCard::getSurname() {
    return ("Student " + surname);
}

void StudCard::setUniversity(string newUniversity) {
    university = newUniversity;
}

int StudCard::getCourse() {
    return course;
}

string StudCard::getUniversity() {
    return university;
}

StudCard::StudCard(string newSurname, int newCount, int newCourse, string newUniversity) {
    surname = newSurname;
    count = newCount;
    course = newCourse;
    university = newUniversity;
}

void StudCard::Show(StudCard studCards[], int arraySize) {
    int widths[6] = {20, 10, 25, 15, 25, 15};

    for (int i = 0; i < arraySize; i++) {
        cout << "|";
        cout << center(studCards[i].getSurname(), widths[0]) << "|"
             << center(to_string(studCards[i].getCount()), widths[1]) << "|"
             << center("", widths[2]) << "|"
             << center("", widths[3]) << "|"
             << center(to_string(studCards[i].getCourse()), widths[4]) << "|"
             << center(studCards[i].getUniversity(), widths[5]) << "|\n";
        cout << "+";
        for (const auto& width : widths) {
            cout << setfill('-') << setw(width) << "" << "+";
        }
        cout << setfill(' ') << "\n";
    }

    do {

    } while (cin.get() != '\n');
}
