                //THIS IS THE HEADER FILE

class ListType
{

    public:
            //public members
        bool isEmpty()const;
         // this function checks if the list is empty
         //postcondition : true is returned if the array is empty and false is returned if the array isn't
  
        bool isFull()const;
        // this function checks if the list is full
        //postcondition : true is returned if the array is full and false is returned if the array isn't
  
        int searchList(int item)const;
        // this function searches the list for a specific element (integer)
        //post condition : The index/position/location of the item is returned
  
        static inline void swap(int& a, int& b); 
        // this is an helper function to the sort function to swap two values
        //postcondition : the values of a and b are swaped
  
        void sortList();
        // this function will implement the selction sort to arrange the array
        //postcondition : The list will be sorted in ascending order
  
        void insertElement(int new_element);
        // this function adds an element in the list
        //postcondition : The new elemnt will be inserted in the open/free index
  
        void removeElement(int element);
        // this function removes an lement in the list
        //postcondition : The element passed an argument will be removed from the araray
  
        void destroyList();
        // this function eradicates the entire list and its elements
        //postcondition : The list will be destroyed
  
        void printList();// this function prints the entire list
        ListType();//default constructor
        ListType(int& array[], int length); //constructor with parameters
        ~ListType(); // destructor

    private: //private members

        int list[];//variable to store the array
        int length; // variable to store the length of the array

};
