#include <stdio.h>
int main() {
    int a = 10;
    int *ptr = &a; // Pointer to an integer

    printf("Value of a: %d\n", a); // Output: 10
    printf("Address of a: %p\n", (void*)&a); // Output: Address of a
    printf("Value of ptr: %p\n", (void*)ptr); // Output: Address of a
    printf("Value pointed to by ptr: %d\n", *ptr); // Output: 10

    return 0;
}