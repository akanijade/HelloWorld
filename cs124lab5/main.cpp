#include <iostream>

template <class T>
class stack{
    private:
        int MAX_SIZE;
        T* Stack;
        int size;
        int top;
    public:
        stack(){
            this->MAX_SIZE = 8;
            this->Stack = new T[this->MAX_SIZE];
            this->size = 0;
            this->top = -1;
        }
        stack(int stackSize){
            this->MAX_SIZE = stackSize;
            this->stack();
        }
        ~stack() {
            delete []this->Stack;
        }
        int getSize(){
            return this->size;
        }

        bool isEmpty(){
            return size == 0;
        }
        
        bool isFull(){
            return size == MAX_SIZE;
        }

        void print(){
            if(isEmpty()){
                std::cout << "list is empty" << std::endl;
                return;
            }
            for(int i = top; i >= 0; --i)
                std::cout << Stack[i] << " ";
            std::cout << std::endl;
        }
        
        void push(const T& item){
            if(isFull()){
                std::cout << "list is full" << std::endl;
                return;
            }
            this->top++;
            this->Stack[top] = item;
            this->size++;
        }

        T peek(){
            return this->Stack[top];
        }
        
        T pop(){
            T data;
            if(isEmpty()){
                std::cout << "list is empty, can't pop" << std::endl;
            }else{
            data = Stack[top];
            this->top--;
            this->size--;
            }
            return data;
        }

        void deleteStack(){
            this->size = 0;
            this->top = -1;
            delete []Stack;
        }

        void reverseStack(stack<T>& otherStack){
            otherStack.deleteStack();
            otherStack.size = this->size;
            otherStack.Stack = new T[this->size];
            for(int i = top; i >= 0; --i)
                otherStack.push(this->Stack[i]);   
        }

};

int main(){
    stack<int> list;
    list.push(3);
    list.push(5);
    list.push(9);
    list.push(1);
    list.push(12);
    list.push(15);

    std::cout << "Element at top of the stack: " << list.peek() << std::endl;
    std::cout << "Elements: ";
    while(!list.isEmpty())
        std::cout << list.pop() << " ";
    std::cout << std::endl;
    std::cout << "Stack full: " << list.isFull() << std::endl;
    std::cout << "Stack empty: " << list.isEmpty() << std::endl;

    return 0;
}