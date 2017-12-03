#include "source.h"
using namespace std;
//implementation of the list class/ADT

//@param array[] is the array to be passed and @param length is the length of the array
ListType::ListType(int& array[], int length){
  
  //initializing the members
  this->list[]= array[];
  this->legth[]= length;
  
}

//this function checks if the array is empty
bool ListType:: isEmpty() const{
  
 for(int i = 0; i < this->length; i++){
    //if there's at least one lement in the list
        if(this.>list[i] != NULL){
   //then the list is not empty
          return false; 
        }else{
         continue;// increment the indexand go to the elemnet 
        }
   }
  return true; //returns true if each index of the array does not contain an element or elemnt is zero
}

//this function checks if the array is full
bool ListType:: isFull() const{
  //algorithm
  
  //loop trough array
  //if all indexes does not have an elemnet of zero
  //then the list is full
  //else it's not full
  
  for(int i = 0; i < this->length; i++){
    
      if(this->list[i] != NULL)
          continue;  
      }else{
        return false;
    }
  }
  return true;
}

static inline void ListType :: swap(int& a, int& b){ //this function swaps two values
    // code goes here 
  int temp = b;
  b = a;
  a = temp;
}

//this function sorts the list
ListType:: sortList(){
  //imlementing selection sort for better performance
}


//@param item is the integer to be searched
//this func searches the list for a specific element
int ListType:: searchList(int item) const{
  
  //imlementing binary search to save time and amount of looping
  //best scenario, array is sorted in ascding order, 
  //therefore the array must be sorted firs
  
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

//this function prints each elemnt of the list
void ListType:: printList()
  //code goes here 
}

