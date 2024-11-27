#ifndef PASSPORT_H
#define PASSPORT_H
#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
#include <unordered_map>
#include "Documents.h"
#include "center.h"

using namespace std;

class Passport : public Documents {
public:
    Passport();
    Passport(string newSurname, int newCount, int newRegion, int newDateOfBirth);
    string getSurname();
    void setRegion(int newRegion);
    void setDateOfBirth(int newDateOfBirth);
    int getRegion();
    int getDateOfBirth();
    void Show(Passport passports[], int arraySize);
protected:
private:
    int region;
    int dateofbirth;
};


#endif //PASSPORT_H
