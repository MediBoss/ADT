#include <iostream>

using namespace std;

class listType
{

    public:
            //public members
        bool isEmpty()const;
        bool isFull()const;
        int searchList(int item)const;
        void insertElement(int new_element);
        void removeElement(int element);
        void destroyList();
        void printList();
        listType();//constructor

    private: //private members

        int list[100];
        int length;

};