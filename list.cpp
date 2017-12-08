//THIS IS THE IMPLEMENTATION FILE 

#include "source.h"
#include <iostream>
using namespace std;
//implementation of the list class/ADT

//@param array[] is the array to be passed and @param length is the length of the array
ListType::ListType(int& array[], int length){
  
  //initializing the member
  this->legth[]= length;
  
  ListType::ListType(int array[], int length){
  
  //initializing the members
  this->length = length;

  for(int i = 0; i < this-> length; i++){
    
    this->list[i] = array[i]; //initializes every element of the array

  }

}

//this function checks if the array is empty
bool ListType:: isEmpty() const{
  
  
 for(int i = 0; i < this->length; i++){
    //if there's at least one lement in the list
        if(this->list[i] == 0){
   //then the list is not empty
          return false; 

        }else{

         continue;// increment the indexand go to the element 

        }
   }
  return true; //returns true if each index of the array does not contain an element or elemnt is zero
}

//this function checks if the array is full
bool ListType:: isFull() const{
   //****Algorithm****
  
  //loop trough array
  //if all indexes does not have an elemnet of zero
  //then the list is full
  //else it's not full
   for(int i = 0; i < this->length; i++){
    
      if(this->list[i] != 0){

          continue; //the loop continues if the current index is not empty

      }else{

        return false; //returns false if the current index is empty, which means the array is not empty
    }
  }
  return true;
}

 void ListType :: swap(int& a, int& b){ //this function swaps two values. This is an helper function for the SearchList() function
    // code goes here 
  int temp = b;
  b = a;
  a = temp;
}

//this function sorts the list
ListType:: sortList(){
  //imlementing selection sort for better performance
  int loc; //will store the current location
  int index; // store the index
  int smallestTindex; // store the smallest index
  
      for(index < this->length; index++){
        
        index = smallestIndex;// assumnig that thefirst index is the smallest index
          
          for(loc = index+1; loc < this->length; loc++){
              if(this->list[loc] < this->list[smallestIndex]){
                  smallestIndex = loc;//the current location now is the smallest index
                
                  //swaping the element in the smallestIndex and the elemnt in the current index
                  this->swap(this->list[smallestIndex] , this->list[index]);
              }
           }
      }
}//end of list sorting


//@param item is the integer to be searched
//this func searches the list for a specific element
int ListType:: searchList(int item) const{
  
  //imlementing binary search to save time and amount of looping
  //best scenario, array is sorted in ascding order, 
  //therefore the array must be sorted first
  sortList(); // this function will sort the list
  
  int max = this->length - 1;
  int min = 0;
  
  for(int i = 0; i < this-)
  // pick up here
}

//this function inserts an element in the array
//@param elem the element to be inserted in the list
void ListType:: insertElement(int elem){
  
 //code goes here 
}

//this function removes an elemnet from the array
//@param elem is the element  to be remved from the list
void ListType:: removeElement(int elem){
  
 //goes here 
}

//this functions calls the destructor
void ListType:: destroyList()
 //code goes here 
  ~ListType();
}

//this function prints each element of the list
void ListType:: printList()
  //code goes here 
  for(int i = 0; i < this->length; i++){
    std::cout<<this->list[i]; 
  }
}

