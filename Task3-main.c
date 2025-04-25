#include<stdio.h>
int main(){
    int square(int n);
    int cube(int n);
    int n = 5;
    printf("square in %d is %d\n",n,square(n));
    printf("cube in %d is %d\n",n,cube(n));
    return 0;
}
