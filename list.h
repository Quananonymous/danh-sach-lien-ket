#ifndef node_h
#define node_h
#include "node.h"
template <class T>
class List
{
    private:
        Node<T> *head;
    public:
        List(){
            head = NULL;
        }
        void Add(T val){
            Node<T> *n = new Node<T>;
            n -> data = val;
            n -> next = NULL;
            if (head == NULL){
                head = n;
            }else{
                Node<T> *p = head;
                while (p -> next != NULL){
                    p = p -> next;
                }
                p -> next = n;
            }
        }
        void PrintAll(){
            Node<T> *p = head;
            while (p != NULL){
                cout << p -> data<< "; ";
                p = p -> next;
            }
        }
};

#endif