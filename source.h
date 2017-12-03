                //THIS IS THE IMPLEMENTATION FILE

#include <iostream>

using namespace std;

class ListType
{

    public:
            //public members
        bool isEmpty()const;// this function checks if the list is empty
        bool isFull()const;// this function checks if the list is full
        int searchList(int item)const;// this function searches the list for a specific element (integer)
        static inline void swap(int& a, int& b); // this is an helper function to the sort function to swap two values
        void sortList(); // this function will implement the selction sort to arrange the array
        void insertElement(int new_element);// this function adds an element in the list
        void removeElement(int element);// this function removes an lement in the list
        void destroyList();// this elemnts eradicates the entire list and its elements
        void printList();// this function prints the entire list
        ListType();//default constructor
        ListType(int& array[], int length); //constructor with parameters
        ~ListType(); // destructor

    private: //private members

        int list[];
        int length;

};
