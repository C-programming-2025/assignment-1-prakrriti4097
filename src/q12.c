#include <stdio.h>
int main() {            
    int a = 5, b = 3, c = 2;
    int result = (a > b) && (c != 0);
    printf("Result: %d\n", result); // Output will be 1 (true) or 0 (false)
    return 0;
}