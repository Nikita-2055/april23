#include "string_utils.h"
int n = 0;
int string_length(const char* str){
    for(int i = 0; str[i] != '\0'; ++i){
        n++;
    }
    return n;
}
