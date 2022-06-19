// Matthew Delgado
// ECE 2552, Dr. Smith
// 2-23-2022
// Lab 6 - List and Iterator ADTs
/* This program was copy & pasted from the lab instructions then altered slightly.
The lab instructions to not call for this file to be turned in for a grade but I
included it to show that I used it to test my inital Stack and Node classes.
This main.cpp file is commented out to prevent the interference of having two
main functions in one project. */

#include "Stack.h"

#include <iostream>

int main(){
    Stack<int> stackInt = Stack<int>();
    // Store several numbers to the stack
    stackInt.push(32);
    stackInt.push(47);
    stackInt.push(18);
    stackInt.push(59);
    stackInt.push(88);
    stackInt.push(91);

    // list the element of stack
    while(!stackInt.isEmpty()){
        // Get the top element
        std::cout << stackInt.top() << " - ";
        // Remove the top element
        stackInt.pop();
    }
    std::cout << "END" << std::endl;
    return 0;
}
