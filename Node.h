// Matthew Delgado
// ECE 2552, Dr. Smith
// 2-23-2022
// Lab 6 - List and Iterator ADTs

#ifndef node_h
#define node_h

template <typename T>
class Node{
public:
    T value;    // holds value of node
    Node<T>* next;  // pointer to next node in list
    Node() {}   // default constructor
    Node(T val) : value(val), next(nullptr) {}  // constructor when value is passed
};

#endif /* node_h */
