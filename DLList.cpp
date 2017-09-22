/* 
 * File:   DLList.cpp
 * Author: Angelica
 * 
 * Created on 21 de septiembre de 2017, 07:57 PM
 */

#include "DLList.h"
#include "NodeDL.h"

template <typename T> class MyList {
    
        public:
        NodeDL <T>* first;
        NodeDL <T>* last;
        NodeDL <T>* pointer;
        int length;
        
        
        DLList(){ //constructor por defecto
        first =NULL;
        last =NULL;
        pointer =NULL;
        length=0;
        }
        
        DLList(T d){ //constructor con un primer nodo
        NodeDL<T> node = NodeDL<T>(d);
        //apuntamos primero y ultimo al nuevo nodo
        first =& node;
        last =& node;
        //Incrementamos el contador de elementos de la lista
        length++; 
        }
        
        
        //ESTÁ VACÍO
        bool isEmpty(){
        return length==0;  
        }
        
        
        //INSERT FIRST
        void insertFirst(T d){
        NodeDL<T> node = new NodeDL<T>(d);
        if(isEmpty()){ //Si la lista está vacía
        *first=node;
        *last=node;  
        }else { //si la lista ya cuenta con elementos
        //el siguiente del nuevo nodo apunta a donde apunta first
        node.next*=first; //node es un objeto ya instanciado
        //el nodo que apunta first en su apuntador back, apunta al nuevo nodo
        first -> back=node; //es flecha, porque es sólo un apuntador
        *first = node; 
        }
        length ++;
        }
        
        
        //INSERT LAST
        void insertLast(T d){
        NodeDL<T> node = newNodeDL<T>(d);
        if(isEmpty()){
        *first=node;
        *last=node;
        } else {
        node.back*=last;
        last->next.node;
        *last=node;
        }
        length ++;
        }
        
        //------------------------------------------------------------------------------------
        //ACTIVIDAD
            
            
         //ELIMINAR INICIO
        void deleteFirst(T d){
        if(isEmpty()){
        if (first ->next.node == NULL){
        *first =NULL;
        *last =NULL;
        } else {
        *first -> first.next;
        }
        length --; 
        }    
        }
        
        
        //ELIMINAR FINAL
        void deleteLast(T d){
        if(isEmpty()){
        if(first -> next.last){
        first = NULL;
        last = NULL;
        } else {
        *pointer = first;
        while(*pointer -> last.next){     
        *pointer = *pointer.next;     
        }
        last -> *pointer;
        last.next = NULL;
        *pointer = NULL;
        }
        length --;
        }
        }
        

        //  ELIMINAR NODO
        bool deleteNode(T n) {
        NodeDL<T> node = newNodeDL<T>(d);   
        if (d! = NULL){
        if (*data -> n)
        deleteFirst();
        } else {
        d.next* -> d.next.next;
        length --; }
        return true;
        return false;
        }
        
        
        //Mostrar Lista Inicio-Fin
        void showlistFirstToLast (T n){
        *pointer = fisrt;
        cout << " First --> ";
        for (int i=0; i< length; i++){
        cout << "[" + *pointer->~NodeDL(String) + "]" >> ; //No mandar a la direccion de memoria
        *pointer -> next.node;        
        }
        cout << " <-- Last " << endl;
        cout << "\n" << endl;
        }

        
        //Mostrar Lista Fin-Inicio
        void showListLastToFirst (T n){
        *pointer = last;
        cout << " Last --> ";
        for (int i=0; i< length; i--){
        cout << "[" + *pointer->~NodeDL(String) + "]" >> ;
        *pointer -> last.node;        
        }
        cout << " <-- First " << endl;
        cout << "\n" << endl;   
        }
};
