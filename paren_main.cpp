// Matthew Delgado
// ECE 2552, Dr. Smith
// 2-23-2022
// Lab 6 - List and Iterator ADTs
/*
#include "Stack.h"

#include <iostream>
#include <string>

bool isValid(std::string);

int main(){
    std::string s;
    
    // Ask user to input the expression
    std::cout << "Please type the parenthesis expression "; std::cout << "then press ENTER!" << std::endl;
    std::cin >> s;
    
    // Check the validity of the string
    bool valid = isValid(s);
    
    // Notify the user of the result
    std::cout << std::endl;
    std::cout << "The " << s << " expression is ";
    
    if(valid)
        std::cout << "valid";
    else
        std::cout << "invalid";
    
    std::cout << std::endl;
    
    std::string strArr[5] = { "hello", "{{}}", "(((}}}", "[][]((][[[]", "()()()" };
    
    for(std::string i : strArr){    // for loop to test pre-declared strings of strArr[5]
        // I wrote this program using Xcode running on macOS. Xcode autocompletes my closing brackets in the console
        // so I created this loop to get around that issue and prevent it from possibly cause user-input problems for
        // anyone testing this code on other software. Immediately after testing the user-input string this loop
        // tests all strings in strArr[5].
  
        // Check the validity of string
        valid = isValid(i);
        
        // Notify the user of the result
        std::cout << std::endl;
        std::cout << "The " << i << " test case expression is ";
        
        if(valid)
            std::cout << "valid";
        else
            std::cout << "invalid";
        
        std::cout << std::endl;
    }
    return EXIT_SUCCESS;    // exit program
}

bool isValid(std::string s){
    Stack<char> parenStack;
    for(char& c : s){   // range based for loop moves through each char in string s
        switch (c){
            case '(':
            case '{':
            case '[': parenStack.push(c); break;    // push all open brackets
            case ')':
                if(parenStack.isEmpty() || parenStack.top()!='(')   // to pop, must be corresponding open bracket
                    return false;
                else
                    parenStack.pop(); break;    // pops if brackets match
            case '}':
                if(parenStack.isEmpty() || parenStack.top()!='{')   // to pop, must be corresponding open bracket
                    return false;
                else
                    parenStack.pop(); break;    // pops if brackets match
            case ']':
                if(parenStack.isEmpty() || parenStack.top()!='[')   // to pop, must be corresponding open bracket
                    return false;
                else
                    parenStack.pop(); break;    // pops if brackets match
            default:
                return false;   // this catches any non bracket characters
        }
    }
    return parenStack.isEmpty();    // if you can empty the parenStack then the string is valid, else its false
}
*/
