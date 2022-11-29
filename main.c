#include<stdio.h>

extern int swap_ctx();

int main(){
    int x = swap_ctx();
    printf("%d",x);
    return 0;
}