# ifndef CUSTOM_STACK_VECTOR_H
# define CUSTOM_STACK_VECTOR_H

#include <vector>

class CustomStack{

    private:
    
    std::vector<int> datos;
    
    public:
    
    CustomStack();
    ~CustomStack();

    bool empty();

    int size();
    
    int top ();

    void push(int valor);
    void pop ();

};

#endif