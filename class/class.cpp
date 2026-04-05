#include <iostream>


class entity{
public:
    int x,y;
    // cunstructor used to initialise the values as soon as a member of the class is created
    entity()
    {
        x = 1;
        y = 1;
        std::cout << "created\n";
    }
    // preseeded value cunstructor 
    // entity(int X, int Y)
    // {
    //     x =X;
    //     y = Y;
    // }
    // destructor
    ~entity()
    {
        std::cout << "Destroyed\n";
    }
    void print(){
        std::cout << x << " "<< y<<std::endl;
    }
};



int main(){
    entity e;
    e.print();
}