#include <stdio.h>
#include "math.h"
#include "string_utils.h"

int main(){
    int a = 5;
    int b = 6;
    const char str[] = "positiv";
    printf("add:%d\n",add(a,b));
    printf("mull:%d\n",multiply(a,b));
    printf("lenght:%d\n",string_length(str));
    return 0;
}
