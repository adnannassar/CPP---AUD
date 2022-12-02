#include "LinkedList.h"
#include <iostream>

using namespace std;

int main()
{

    LinkedList myList;

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

    return 1;
}