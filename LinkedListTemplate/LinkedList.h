#include <iostream>
#include <stdbool.h>

using namespace std;
template <typename T>
class LinkedList
{
private:
    struct Node
    {
        T data;
        Node *next;
        Node *before;
        Node(T data, Node *next, Node *before) : data(data), next(next), before(before) {}
    };

    typedef struct Node *node;

    node first;
    node last;
    int counter;

public:
    LinkedList();
    LinkedList(const LinkedList &orig);

    // ~LinkedList();
    void append(T data);
    bool isEmpty();
    void insert(T data, int p);
    void remove(int p);
    T get(int p);
    int index_of(T data);
    T getFirst();
    T getLast();
    void printList();
    int countElements();
    void visit_all(void (*work)(T t));
};

template <typename T>
LinkedList<T>::LinkedList() : first(nullptr), last(nullptr), counter(0) {}

template <typename T>
bool LinkedList<T>::isEmpty()
{
    return first == nullptr || counter == 0;
}

template <typename T>
void LinkedList<T>::append(T data)
{
    node toBeAdded = new Node(data, nullptr, nullptr);
    // add first
    if (isEmpty())
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

template <typename T>
void LinkedList<T>::printList()
{
    node ptr = first;
    while (ptr->next != nullptr)
    {

        cout << ptr->data << " <--> ";
        ptr = ptr->next;
    }
    cout << ptr->data << endl;
}

template <typename T>
int LinkedList<T>::countElements()
{
    return counter;
}

template <typename T>
T LinkedList<T>::get(int p)
{
    if (isEmpty())
    {
        return T();
    }
    else if (p < 0 || p > counter)
    {
        return T();
    }
    else
    {
        node ptr = first;
        int i = 0;
        while (i != p)
        {
            i++;
            ptr = ptr->next;
        }
        return ptr->data;
    }
}

template <typename T>
int LinkedList<T>::index_of(T data)
{
    if (isEmpty())
    {
        return -1;
    }
    else
    {
        node ptr = first;
        int i = 0;
        while (ptr != nullptr)
        {
            if (data == ptr->data)
            {
                return i;
            }
            ptr = ptr->next;
            i++;
        }
        return -1;
    }
}

template <typename T>
T LinkedList<T>::getFirst()
{
    return isEmpty() ? T() : first->data;
    /*

      if(isEmpty()){
          return nullptr;
      }else{
         return first->data;
      }

  */
}

template <typename T>
T LinkedList<T>::getLast()
{
    return isEmpty() ? T() : last->data;
}

template <typename T>
void LinkedList<T>::insert(T data, int p)
{
    node toBeAdded = new Node(data, nullptr, nullptr);
    if (p < 0)
    {
        cout << "Ungültige Position!" << endl;
    }

    else if (p == 0)
    {
        toBeAdded->next = first;
        first->before = toBeAdded;
        first = toBeAdded;
        counter++;
    }
    else if (p >= counter)
    {
        toBeAdded->before = last;
        last->next = toBeAdded;
        last = toBeAdded;
        counter++;
    }
    else
    {
        node ptr = first;
        int i = 0;
        while (i != p)
        {
            i++;
            ptr = ptr->next;
        }
        ptr->before->next = toBeAdded;
        toBeAdded->before = ptr->before;
        ptr->before = toBeAdded;
        toBeAdded->next = ptr;
        counter++;
    }
}

template <typename T>
void LinkedList<T>::remove(int p)
{
    node toBeDeleted;
    if (isEmpty())
    {
        cout << "List ist leer!" << endl;
    }
    else if (counter == 1)
    {
        toBeDeleted = first;
        first = last = nullptr;
        delete toBeDeleted;
        counter--;
    }
    else if (p == 0)
    {
        toBeDeleted = first;
        first->next->before = nullptr;
        first = first->next;
        delete toBeDeleted;
        counter--;
    }
    else if (p >= counter)
    {
        toBeDeleted = last;
        last->before->next = nullptr;
        last = last->before;
        delete toBeDeleted;
        counter--;
    }
    else
    {
        node ptr = first;
        int i = 0;
        while (i != p)
        {
            i++;
            ptr = ptr->next;
        }
        toBeDeleted = ptr;
        ptr->before->next = ptr->next;
        ptr->next->before = ptr->before;
        delete toBeDeleted;
        counter--;
    }
}

template <typename T>
void LinkedList<T>::visit_all(void (*work)(T t))
{
    node ptr = first;
    while (ptr->next != nullptr)
    {
        work(ptr->data);
        ptr = ptr->next;
    }
}