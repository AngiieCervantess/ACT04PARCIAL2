/* 
 * File:   NodeDL.cpp
 * Author: Angelica
 * 
 * Created on 21 de septiembre de 2017, 07:59 PM
 */

#include "NodeDL.h"

#include "DLList.h"

//Nodo para lista doblemente enlazadas
template <typename T> class NodeDL{

    public:
        T data; //dato
        NodeDL* next;  //apuntador a siguiente
        NodeDL* back; //apuntador a anterior
        
        NodeDL(T d){ //constructor
            data=d;
            next= nullptr;
            back= nullptr;
        }
};
