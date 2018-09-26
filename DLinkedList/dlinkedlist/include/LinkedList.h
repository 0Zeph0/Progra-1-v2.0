#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"
#include <cstddef>

using namespace std;

class LinkedList
{
    public:
        LinkedList();
        virtual ~LinkedList();
        int getSize();
        int getPos();
        void goToStart();
        void goToEnd();
        void next();
        void insert(int pos, int element); //inserta un elemento en la posici�n curr
        void append(int element);
        void remove();
        void print();
        void clear();
        void reverse();
        void move(int pos);

    private:
        Node* first; //head
        Node* last; //tail
        Node* curr; //current
        int size;
        int pos;
};

#endif // LINKEDLIST_H
