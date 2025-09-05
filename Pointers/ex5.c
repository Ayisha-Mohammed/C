// POINTER TO POINTER

#include <stdio.h>
int main() {
    int a = 10;
    int *p = &a;     // pointer to int
    int **q = &p;    // pointer to pointer

    printf("a = %d\n", a);
    printf("*p = %d\n", *p);     // value of a
    printf("**q = %d\n", **q);   // value of a (through q)
    return 0;
}


/*
Why use pointer to pointer?
When you need to modify a pointer inside a function.
Example: Dynamic memory allocation (malloc, free), linked list insertion, etc.


General Rule

*p → “value at the address inside p”

**q → “value at the address inside *q”

***r → “value at the address inside **r”

👉 Each extra * means one more level of indirection (one more “go inside the box”).

Visual 📦 (double pointer)
a = 10
p = &a
q = &p

q ---> p ---> a
      (*p=10) (**q=10)


*/