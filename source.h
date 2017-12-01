#include <iostream>

using namespace std;

class ListType
{

    public:
            //public members
        bool isEmpty()const;// this function checks if the list is empty
        bool isFull()const;// this function checks if the list is full
        int searchList(int item)const;// this function searches the list for a specific element (integer)
        void insertElement(int new_element);// this function adds an element in the list
        void removeElement(int element);// this function removes an lement in the list
        void destroyList();// this elemnts eradicates the entire list and its elements
        void printList();// this function prints the entire list
        ListType();//constructor

    private: //private members

        int list[];
        int length;

};
