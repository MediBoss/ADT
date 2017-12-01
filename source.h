#include <iostream>

using namespace std;

class ListType
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
        ListType();//constructor

    private: //private members

        int list[];
        int length;

};
