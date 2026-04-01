#include <iostream>


class entity{
public:
    int x,y;
    void print(){
        std::cout << x << " "<< y<<std::endl;
    }
};

int main(){
    entity e;
    e.x = 1;
    e.y = 2;

    entity e2;
    e2 = {3,5};

    e.print();
    e2.print();
}