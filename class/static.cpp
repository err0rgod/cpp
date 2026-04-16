#include <iostream>
#include <vector>

int main(){
    const int val =5;
    int* a = nullptr;
    a = (int*)&val;
    *a = 10;
    std::cout<<*a<<std::endl;

}