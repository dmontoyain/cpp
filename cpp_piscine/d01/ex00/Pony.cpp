#include "Pony.hpp"

Pony::Pony (bool onStack) : onStack(onStack) {
    return ;
}

Pony::~Pony(void){
    if (onStack){
        std::cout << "Stack Destroyed\n";
    }
    else {
        std::cout << "Heap Destroyed\n";
    }
    return;
}

Pony::Pony(std::string name, std::string gender, int age, bool onStack) : name(name), gender(gender), age(age), onStack(onStack) {
    return ;
}