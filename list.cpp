/THIS IS THE IMPLEMENTATION FILE

#include "source.h"
#include <iostream>

//implementation of the list class/ADT
/*
      //CONSTRUCTORS

//constructor with parameters
List::List(){

}

//copy constructor
List::List(const List& otherList){

}
*/
//this function checks if the array is empty

      //NON ABSTRACT FUNCTIONS
bool List:: isEmpty() const{


 for(int i = 0; i < this->length; i++){
    //if the length is zero,
    //then the list is empty
        if(this->length == 0){
          return true;
        }
      return false;
}

//this function checks if the array is full
bool List :: isFull() const{

   //the list is full if the length is equal to the max max
    if(this->length == maxSize){
      return true;
    }

  return false;

}

int List :: maxListSize()const{

    return this->maxSize;
}

int List :: listSize() const{

  return this->length;
}

//this function prints each element of the list
void List :: print(){
  //code goes here
  for(int i = 0; i < this->length; i++){
    std::cout<<this->list[i] <<std::endl;
  }

}
bool list :: isItemEqualAt(int elem, int loc)const{

    if(loc < 0 || loc >= this->length){

        std::cout<<"ERROR FOUND : Location Out Of Range"<<std::endl;
        return false;
    }else

        return (this->list[loc] == item);//will return true or false
}

//this function removes an elemnet from the array
//@param elem is the location of the element to be removed from the list
void List :: removeElementAt(int loc){


  if(loc < 0 || loc >= this->length){
    std::cout<<"ERROR : The Location is Out of Range "<<std::endl;
  }
  else

    for(int i = loc; i < this->length; i++){
        this->list[i] = this->list[i+1]; //shifting the elemnts to the left, which over writes the element at location
        this->lenght--;//decrement the size of the list
    }
}


void List :: add(int item){

}
/*
 void List :: swap(int& a, int& b){ //this function swaps two values. This is an helper function for the SearchList() function

  int temp = b;
  b = a;
  a = temp;
}

//this function sorts the list
void List :: sortList(){
  //imlementing selection sort for better performance
  int loc; //  stores the current location
  int index;// stores the current index
  int smallestIndex; //  stores the smallest index

      for(index = 0; index < this->length; index++){

        index = smallestIndex;// assumnig that thefirst index is the smallest index

          for(loc = index+1; loc < this->length; loc++){
              if(this->list[loc] < this->list[smallestIndex]){//if the elemnet in the location is smallest than the elemnt in the smallest index
                  smallestIndex = loc;//the current location now is the smallest index

                  //swaping the element in the smallestIndex and the elemnt in the current index
                  this->swap(this->list[smallestIndex] , this->list[index]); // a call to the function swap
              }
           }
      }
}//end of list sorting
*/
/*

//@param item is the integer to be searched
//this func searches the list for a specific element
int List :: searchList(int item) const{

  //imlementing binary search to save time and amount of looping
  //best scenario, array is sorted in ascding order,
  //therefore the array must be sorted first
  this->sortList(); // this function will sort the list

  int high = this->length - 1;
  int low = 0;

  while(low <= high){

    int middle = (int)(low+high)/2;// to store the middle index

    int currValue= this->list[middle];// the current value

      if(currentValue == item){ //checks if the current

        return currentIndex; // the position of the wnted number is returned

      }else if(currentValue < item){ //if the current number is less

        low = middle + 1; //we increment the lower index
      }else{

        high = middle - 1;// we decrement the higher index
      }
  }

  return -1; // -1 is returned if the elemnt is not in the list
}

//this function inserts an element in the array
//@param elem the element to be inserted in the list
void List :: insertElement(int new_elem){

 //code goes here
}


void list :: replaceAt(int item, int loc){


}



//this functions calls the destructor
void List :: clear(){
 //code goes here
  ~ListType();
}
