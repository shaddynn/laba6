#ifndef DOCUMENTS_H
#define DOCUMENTS_H

#include <string>

using namespace std;

class Documents {
public:
    virtual void Show(Documents documents[], int arraySize);
    virtual string getSurname();
    void setSurname(string newSurname);
    int getCount();
    void setCount(int newCount);
protected:
    int count;
    string surname;
private:
};


#endif //DOCUMENTS_H
