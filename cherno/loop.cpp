#include <iostream>
long long rec(int n ){
    if(n==1) return 1;
    return n+rec(n-1);
}
int main(){
    int n = 5;
    std::cout << rec(52)<<std::endl;
}