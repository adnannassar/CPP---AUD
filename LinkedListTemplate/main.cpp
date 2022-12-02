#include "LinkedList.h"
#include <iostream>
#include "Medium.h"
#include "Bild.h"
#include "Audio.h"
using namespace std;

void ausgabe(Medium *m)
{
    m->druckeDaten();
}

void testStringLinkedList()
{
    LinkedList<const char *> myList;

    myList.append("Nermen");
    myList.append("Sherin");
    myList.append("Hanna");

    myList.printList();
    cout << "Anzahl Elemente: " << myList.countElements() << endl;
    int pos = 1;
    cout << "Element an der Position " << pos << ": " << myList.get(pos) << endl;

    const char *element = "Sherin";
    cout << "Position des Elements(" << element << "): " << myList.index_of(element) << endl;
    cout << "Erste Element: " << myList.getFirst() << endl;
    cout << "Letzte Element: " << myList.getLast() << endl;
    cout << "\nList Before insert: ";
    myList.printList();
    myList.insert("Adnan", 0);
    myList.insert("Rami", 6);
    myList.insert("Ahmad", 3);

    cout << "List After  insert: ";
    myList.printList();

    cout << "\nList Before delete: ";
    myList.printList();
    myList.remove(0);
    myList.remove(6);
    myList.remove(2);
    cout << "List after  delete: ";
    myList.printList();
}
void testIntegerLinkedList()
{
    LinkedList<int> myList;

    myList.append(1);
    myList.append(2);
    myList.append(3);

    myList.printList();
    cout << "Anzahl Elemente: " << myList.countElements() << endl;
    int pos = 1;
    cout << "Element an der Position " << pos << ": " << myList.get(pos) << endl;

    int element = 2;
    cout << "Position des Elements(" << element << "): " << myList.index_of(element) << endl;
    cout << "Erste Element: " << myList.getFirst() << endl;
    cout << "Letzte Element: " << myList.getLast() << endl;
    cout << "\nList Before insert: ";
    myList.printList();
    myList.insert(10, 0);
    myList.insert(11, 6);
    myList.insert(12, 3);

    cout << "List After  insert: ";
    myList.printList();

    cout << "\nList Before delete: ";
    myList.printList();
    myList.remove(0);
    myList.remove(6);
    myList.remove(2);
    cout << "List after  delete: ";
    myList.printList();
}
void testMediumLinkedList()
{

    LinkedList<Medium *> myList;

    myList.append(new Bild("Gebaeude FB Informatik", 2014, "Dortmund"));
    myList.append(new Audio("It Means Nothing", 2007, "Stereophonics", 229));
    myList.append(new Bild("Our last Memory", 2021, "Essen"));

    myList.visit_all(ausgabe);
    cout << "Anzahl Elemente: " << myList.countElements() << endl;
    int pos = 1;
    cout << "Element an der Position " << pos << ": ";
    ausgabe(myList.get(pos));
    cout << endl;

    Medium *element = new Bild("Gebaeude FB Informatik", 2014, "Dortmund");
    cout << "Position des Elements(";
    ausgabe(element);
    cout << "): " << myList.index_of(element) << endl;
    cout << "Erste Element: ";
    ausgabe(myList.getFirst());
    cout << "Letzte Element: ";
    ausgabe(myList.getLast());
    cout << "\nList Before insert: ";
    myList.visit_all(ausgabe);
    myList.insert(new Bild("Gebaeude FB Wirtschaft", 2013, "München"), 0);
    myList.insert(new Audio("My Son", 2003, "Me", 250), 6);
    myList.insert(new Bild("Gebaeude Library", 2020, "Dortmund"), 3);

    cout << "List After  insert: ";
    myList.visit_all(ausgabe);

    cout << "\nList Before delete: ";
    myList.visit_all(ausgabe);
    myList.remove(0);
    myList.remove(6);
    myList.remove(2);
    cout << "List after  delete: ";
    myList.visit_all(ausgabe);
}

int main()
{
    //  testMediumLinkedList();
    testIntegerLinkedList();
    return 1;
}