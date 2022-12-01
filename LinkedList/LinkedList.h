#include <iostream>

using namespace std;

class LinkedList
{
private:
    struct Node
    {
        const char *data;
        Node *next;
        Node *before;
        Node(const char *data, Node *next, Node *before) : data(data), next(next), before(before) {}
    };

    typedef struct Node *node;

    node first;
    node last;
    int counter;

public:
    LinkedList();
    LinkedList(const LinkedList &orig);

    // ~LinkedList();
    void append(const char *data);
    // void insert(const char *data, int p);
    // void remove(int p);
    // const char *get(int p) const;
    // int index_of(const char *data);
    // const char *getFirst();
    // const char *getLast();
    void printList();
    // int countElements();
};

LinkedList::LinkedList() : first(nullptr), last(nullptr), counter(0) {}
void LinkedList::append(const char *data)
{
    node toBeAdded = new Node(data, nullptr, nullptr);
    // add first
    if (first == nullptr)
    {
        first = last = toBeAdded;
        counter++;
    }
    // add last
    else
    {
        last->next = toBeAdded;
        toBeAdded->before = last;
        last = toBeAdded;
        counter++;
    }
}
void LinkedList::printList()
{
    node ptr = first;
    while (ptr != nullptr)
    {
        cout << ptr->data << "\t";
        ptr = ptr->next;
    }
    cout << endl;
}