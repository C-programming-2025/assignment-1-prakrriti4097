// Given a variable num, write an expression that checks if it is a power of 2.
#include <stdio.h>
int main() {        
    int num = 16; 
    int isPowerOf2 = (num > 0) && ((num & (num - 1)) == 0);
    printf("Is %d a power of 2? %d\n", num, isPowerOf2); 
    return 0;       
}