#ifndef STACK_H
#define STACK_H

#include <iostream>

template <class T>
struct Node{
    T val;
    Node* next;
};

template <class T>
class Stack{
    private:
        Node<T>* head;
        int length;
    
    public:
        Stack(){
            this->head = nullptr;
            this->length = 0;
        }
        void print(){
            if(this->head == nullptr)
                std::cout << "list is empty" << std::endl;
            Node<T>* temp = head;
            while(temp != nullptr){
                std::cout << temp->val << std::endl;
                temp = temp->next;
            }
        }

        void insert(const T& item){
            if(head == nullptr){
                this->head = new Node<T>;
                this->head->val = item;
                this->head->next = nullptr;
                this->length++;
                return;
            }
            Node<T>* temp = new Node<T>;
            temp->val = item;
            temp->next = this->head;
            this->head = temp;
            this->length++;
        }

        Stack<T>* revers(){
            Node<T>* reverseStack;
            Node<T>* temp = this->head;
            while(temp != nullptr){
                reverseStack = head;
                
            }
        }
};


#endif