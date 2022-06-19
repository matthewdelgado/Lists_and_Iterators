// Matthew Delgado
// ECE 2552, Dr. Smith
// 2-23-2022
// Lab 6 - List and Iterator ADTs

#ifndef Stack_h
#define Stack_h
#include "Node.h"
#include <vector>

template <typename T>
class Stack{
private:
    std::vector<Node<T>> s;
    int m_count;
    Node<T>* m_top;
public:
    Stack() : m_count{0}, m_top{nullptr} {} // default constructor
    bool isEmpty() { return !m_count; } // returns if stack is empty
    T top() { return m_top->value; }    // returns top element in stack
    void push(T val);   // pushes new node in to the stack
    void pop(); // pops top element from the stack
};

template <typename T>
void Stack<T>::push(T val){
    Node<T>* newNode = new Node<T>; // dynamically alloc memory for new Node
    newNode->value = val;   // set node's value to the value passed
    if(!isEmpty())
        newNode->next = m_top;  // if stack is not empty link new top node to next node in list
    else
        newNode->next = nullptr;    // if stack is empty set the new node to be the top and only node
    s.push_back(*newNode);  // push the node to the stack
    m_top = newNode;    // LIFO, top node is next to be popped
    m_count++;  // increase the count size of the stack
}

template <typename T>
void Stack<T>::pop(){
    m_top = m_top->next; // keep hold of the link to the stack before popping the top node, else stack is lost
    s.pop_back();   //pop the top node
    m_count--;  // decrease the count size of the stack
}
#endif /* Stack_h */
