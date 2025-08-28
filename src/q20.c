// Write an expression that checks if a number is a multiple of either 3 or 5.
#include <stdio.h>
int main() {        
    int num = 15; 
    int isMultipleOf3Or5 = (num / 3) * 3 == num || (num / 5) * 5 == num;
    printf("Is %d a multiple of either 3 or 5? %d\n", num, isMultipleOf3Or5); 
    return 0;       
}   