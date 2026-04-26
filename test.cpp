#include <iostream>

struct vec2
{
    float x,y;
    vec2(float x, float y): x(x), y(y) {}
    vec2 add(const vec2& other) const{
        return vec2(x+other.x, y+other.y);
    }
    void print(){
        std::cout<< x+y<< std::endl;
    }
};


int main(){

    vec2 pos1(10,9);
    vec2 pos2(10,9);
    vec2 res =  pos1.add(pos2);
    res.print();
}