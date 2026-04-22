#include <stdio.h>
#include <stdlib.h>

int main(){
    int* a = (int*)malloc(20);
    for(int i =0; i<5; i++){
        a[i] = i+1;
        printf("%d \n",a[i]);
    }
    a = (int*)realloc(a,40);
}
