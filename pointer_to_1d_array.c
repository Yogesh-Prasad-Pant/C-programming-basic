// array of pointer 
#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50}; // One-dimensional array
    int *ptr = arr; // Pointer to the first element of the array

    // Accessing elements using pointer arithmetic
    printf("Elements of the array:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }
    
    return 0;
}
