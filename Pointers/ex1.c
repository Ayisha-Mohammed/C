// basic pointer 

#include <stdio.h>
int main() {
    int a = 10;
    int *p = &a;      // p stores address of a
    printf("%d\n", *p);  // dereference pointer → prints value of a
    return 0;
}

/*
Dry Run
Variable	Value
a	10
p	address of a
*p	10 (dereferenced)

Output: 10

Key Notes:
*p → value at address stored in pointer
&a → address of variable a
int *p → pointer to int


*/