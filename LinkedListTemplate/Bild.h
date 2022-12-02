#ifndef _BILD_H_INCLUDED
#define _BILD_H_INCLUDED

#include "Medium.h"
#include <string>
#include <iostream>
using namespace std;
class Bild : public Medium
{
private:
    string ort;

public:
    Bild(string title, int jahr, string ort);
    void druckeDaten() override;
};

Bild::Bild(string title, int jahr, string ort) : Medium(title, jahr), ort(ort) {}
void Bild::druckeDaten()
{
    cout << "ID = " << getId()<<" \""<<getTitle()<<"\" aufgenommen im Jahr "<<getJahr()<<" in " <<ort<<endl;
}
#endif