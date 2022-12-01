#include "Medium.h"
#include "Bild.h"
#include "Audio.h"
#include <iostream>

using namespace std;
int main()
{

    // Medium medium("My Medium", 2020);

    // cout << "Alter :" << medium.alter() << endl;
    // cout << "ID von Medium: " << medium.druckeDaten() << endl;
    // m.druckeDaten();


    Bild bild("Gebaeude FB Informatik", 2014, "Dortmund");
    Audio audio("It Means Nothing", 2007, "Stereophonics", 229);

    bild.druckeDaten();
    audio.druckeDaten();

    cout << "Alter von " << bild.getTitle() << " " << bild.alter() << " Jahre" << endl;
    cout << "Alter von " << audio.getTitle() << " " << audio.alter() << " Jahre" << endl;

    return 1;
}