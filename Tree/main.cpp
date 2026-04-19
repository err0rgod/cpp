#include <iostream>
#include <vector>

class entity{
private:
    int name = 0;
    mutable int cnt = 0;
public:
    int getname() const{
        cnt++;
        std::cout<<cnt<<std::endl;
        return name;
    }
};


int main(){
    entity e;
    e.getname();
    e.getname();
    e.getname();
    e.getname();
    e.getname();
}