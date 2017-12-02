#include "source.h"
using namespace std;

using namespace std;

//implementation of the list class/ADT

//@param array[] is the array to be passed and @param length is the length of the array
ListType::ListType(int& array[], int length){
  
  //initializing the members
  this->list[]= array[];
  this->legth[]= length;
  
}

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


//@param item is the integer to be searched
int ListType:: searchList(int item) const{
  
  //code goes here
}
//@param elem the element to be inserted in the list
void ListType:: insertElement(int elem){
  
 //code goes here 
}
//@param elem is the element  to be remved from the list
void ListType:: removeElement(int elem){
  
 //goes here 
}

void ListType:: destroyList()
 //code goes here 
  ~ListType();
}

void ListType:: printList()
  //code goes here 
}

