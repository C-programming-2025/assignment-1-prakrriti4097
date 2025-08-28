
#include <stdio.h>
int main() {
    int a, b, temp;
    
    // Input values for a and b
    printf("Enter value for a: ");
    scanf("%d", &a);
    printf("Enter value for b: ");
    scanf("%d", &b);
    
    // Display values before swapping
    printf("Before swapping: a = %d, b = %d\n", a, b);
    
    // Swapping using a temporary variable
    temp = a;
    a = b;
    b = temp;
    
    // Display values after swapping
    printf("After swapping: a = %d, b = %d\n", a, b);
    
    return 0;
}