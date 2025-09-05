// pointer arithmetic 


#include <stdio.h>
int main() {
    int a = 10;
    int *p = &a;
    p++;              
    printf("%p\n", p);
    return 0;
}

/*
output: 0x7ffee3b7cac0
Step-by-step execution:

int a = 10;

Variable a is created in memory.

Suppose a is stored at address 0x7ffee3b7cabc (this depends on machine).

int *p = &a;

p stores the address of a → 0x7ffee3b7cabc.

p++;

Since p is an int pointer, it moves ahead by sizeof(int) bytes.

On most systems, sizeof(int) = 4.

So p = 0x7ffee3b7cabc + 4 = 0x7ffee3b7cac0.

printf("%p\n", p);

Prints the new address.


*/