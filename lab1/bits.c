#include <stdio.h>

int main() {
    printf("bits.c\n\n");
    
    void *p;
    
    size_t bytes = sizeof(p);
    
    printf("size of(p) = %d\n\n", bytes);
    
    if (bytes == 4) printf("I am a 32-bit program.\n");
    
    if (bytes == 8) printf("I am a 64-bit program.\n");
    
    return 0;
}
