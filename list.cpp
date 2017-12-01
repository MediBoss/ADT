#include "source.h"
using namespace std;

using namespace std;

//implementation of the list class/ADT

ListType::ListType(int array[], int length){
  
  //initializing the members
  this->list[]= array[];
  this->legth[]= length;
  
}

bool ListType:: isEmpty(){
  
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

