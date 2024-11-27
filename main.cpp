#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
#include <unordered_map>
#include "Documents.h"
#include "Passport.h"
#include "StudCard.h"
#include "center.h"

using namespace std;

int main() {
    system("clear");
    Passport passports[8];
    StudCard studCards[8];
    passports[0] = Passport("Smirnova", 1, 86, 2003);
    passports[1] = Passport("Ivanov", 2, 78, 2014);
    passports[2] = Passport("Petrov", 3, 14, 1993);
    passports[3] = Passport("Sidorov", 4, 77, 2002);
    passports[4] = Passport("Alekseev", 5, 81, 1984);
    passports[5] = Passport("Nikolaev", 6, 65, 1972);
    passports[6] = Passport("Tarasov", 7, 60, 2005);
    passports[7] = Passport("Orlov", 8, 04, 2007);
    studCards[0] = StudCard("Smirnova", 1, 3, "bonch");
    studCards[1] = StudCard("Varanov", 2, 5, "itmo");
    studCards[2] = StudCard("Matveev", 3, 2, "voenmeh");
    studCards[3] = StudCard("Novoselov", 4, 1, "leti");
    studCards[4] = StudCard("Sidorov", 5, 2, "politeh");
    studCards[5] = StudCard("Ezjikov", 6, 4, "pgups");
    studCards[6] = StudCard("Tarasov", 7, 3, "bonch");
    studCards[7] = StudCard("Orlov", 8, 2, "spbgu");
    Documents documents[16];

    for (int i=0; i < 16; i++) {
            if (i < 8) {
                documents[i] = passports[i];
            }
            else {
                documents[i] = studCards[i-8];
            }
    }
    int choice;

    while (true) {
        system("clear");
        cout << "\nМеню:\n";
        cout << "1. Просмотр данных\n";
        cout << "2. Вычисление количества одинаковых документов с заданной фамилией\n";
        cout << "0. Выход\n";
        cout << "Выберите действие: ";

        cin >> choice;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            system("clear");
            cout << "Некорректный ввод." << endl;
            do {
                cout << '\n' << "Press the Enter key to continue.";
            } while (cin.get() != '\n');
            continue;
        }
        if (choice == 1) {
            Passport p;
            StudCard s;
            system("clear");
            p.Show(passports, 8);
            s.Show(studCards, 8);
            do {
                cout << '\n' << "Press the Enter key to continue.";
            } while (cin.get() != '\n');
        } else if (choice == 2) {
            system("clear");

           int count = 0;  // Общий счётчик повторяющихся документов
           std::unordered_map<std::string, int> surnameCounts;  // Хранение количества документов для каждой фамилии

            // Подсчёт количества документов для каждой фамилии
            for (int i = 0; i < 16; i++) {
                surnameCounts[documents[i].getSurname()]++;
            }

            // Суммируем только те фамилии, которые повторяются
            for (const auto& pair : surnameCounts) {
                if (pair.second > 1) {
                    count += pair.second;  // Добавляем количество документов с повторяющимися фамилиями
                }
            }


            cout << "Количество одинаковых документов с одинаковой фамилией: " << count << endl;
            do {} while (cin.get() != '\n');
            do {
                cout << '\n' << "Press the Enter key to continue.";
            } while (cin.get() != '\n');
        } else if (choice == 0) {
            system("clear");
            cout << "Выход из программы." << endl;
            do {
                cout << '\n' << "Press the Enter key to continue.";
            } while (cin.get() != '\n');
            return 0;
        } else {
            cout << "Некорректный выбор. Пожалуйста, попробуйте еще раз." << endl;
            do {
                cout << '\n' << "Press the Enter key to continue.";
            } while (cin.get() != '\n');
        }
    }
    return 0;
}
