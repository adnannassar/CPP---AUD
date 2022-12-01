#ifndef _MEDIUM_H_INCLUDED
#define _MEDIUM_H_INCLUDED

#include <string>
#include <iostream>
using namespace std;
class Medium
{
private:
    int id;
    string title;
    int jahr;
    static int counter;

public:
    // Konstrocture
    Medium(string title, int jahr);

    // Getters
    inline const int getId() { return id; }
    inline const string getTitle() { return title; }
    inline const int getJahr() { return jahr; }
    // Setters
    void setTitle(string newTitle);
    void setJahr(int newJahr);

    // Methoden der Klasse Medium
    int alter();

    // Abstrakt Methode
    virtual void druckeDaten() = 0; // virtual pure methode = abstract method
};

// Implementation:
int Medium::counter = 0;

Medium::Medium(string title, int jahr) : title(title), jahr(jahr)
{
    id = counter++;
}
int Medium::alter() { return 2022 - jahr; }
void Medium::setTitle(string newTitle) { title = newTitle; }
void Medium::setJahr(int newJahr) { jahr = newJahr; }

#endif