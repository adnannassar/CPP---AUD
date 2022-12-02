#ifndef _AUDIO_H_INCLUDED
#define _AUDIO_H_INCLUDED

#include "Medium.h"
#include <string>
#include <iostream>
using namespace std;
class Audio : public Medium
{
private:
    string interpret;
    int dauer;

public:
    Audio(string title, int jahr, string interpret, int dauer);
    void druckeDaten() override;
};

Audio::Audio(string title, int jahr, string interpret, int dauer)
    : Medium(title, jahr), interpret(interpret), dauer(dauer) {}
void Audio::druckeDaten()
{
    cout << "ID = " << getId() << " \"" << getTitle() << "\" von " 
    << interpret << " aus " << getJahr() << " Spieldauer: " << dauer << " sek."<<endl;
}

#endif