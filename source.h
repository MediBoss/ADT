//THIS IS THE HEADER FILE

class List
{

 public:
         //public members
     bool isEmpty()const;
      // this function checks if the list is empty
      //postcondition : true is returned if the array is empty and false is returned if the array isn't

     bool isFull()const;
     // this function checks if the list is full
     //postcondition : true is returned if the array is full and false is returned if the array isn't

     int listSize() const;
     //this function checks the size of the List
     //postcondition : The length is returned

     int maxListSize() const;
     //function to check the maximum list list
     //postcondition : an integer representing the max length is returned

     virtual void replaceAt(int item, int loc) = 0;
     //function to replace a specified elemnt at a specified postcondition
     //postcondition : The element is replaced at loc


     int searchList(int item)const;
     // this function searches the list for a specific element (integer)
     //post condition : The index/position/location of the item is returned

     static inline void swap(int& a, int& b);
     // this is an helper function to the sort function to swap two values
     //postcondition : the values of a and b are swaped

     bool isItemEqualAt(int item, int location) const;
     //this function checks if the current item at location is equal to item
     // a true or false statement is returned

     void sortList();
     // this function will implement the selction sort to arrange the array
     //postcondition : The list will be sorted in ascending order

     void insertElement(int new_element);
     // this function adds an element in the list
     //postcondition : The new elemnt will be inserted in the open/free index

     virtual void removeElement(int element) = 0;
     // this function removes an lement in the list
     //postcondition : The element passed an argument will be removed from the array if found
     //the length is decremented by one

     void clearList();
     // this function eradicates the entire list and its elements
     //postcondition : The list will be destroyed

     void printList() const;
     // this function prints the entire list
     //postcondition : All elemnets of the list is printed

     
     List(int length = 100);
     //creates an array with a specified size as parameter
     //the default size is 100

     List(const List& otherList);
     //the copy constructor

     virtual ~List();
     // destructor
     //destroys/deallocates the list

 private: //private members

     int list[100];//variable to store the array
     int length; // variable to store the length of the array

};
