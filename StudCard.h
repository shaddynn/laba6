#ifndef STUDCARD_H
#define STUDCARD_H
#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
#include <unordered_map>
#include "Documents.h"
#include "center.h"

class StudCard : public Documents {
public:
    StudCard();
    StudCard(string newSurname, int newCount, int newCourse, string newUniversity);
    string getSurname() override;
    void setCourse(int newCourse);
    void setUniversity(string newUniversity);
    int getCourse();
    string getUniversity();
    void Show(StudCard studCards[], int arraySize);
protected:
private:
    int course;
    string university;
};


#endif //STUDCARD_H
