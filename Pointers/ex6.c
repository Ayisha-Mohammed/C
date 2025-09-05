#include <stdio.h>

// DANGLING POINTER: A dangling pointer is a pointer that points to memory that is no longer valid.

int *p;
{
    int a = 5;  // 'a' is created in this block
    p = &a;     // p stores the address of a
}   

/*
p still holds the address of a
But a doesn’t exist anymore
If you try *p, C will try to read memory that no longer belongs to your program → undefined behavior / garbage / crash
Key: Dangling pointer = pointer pointing to memory that’s gone.
*/

//NULL POINTER :A null pointer is a pointer that does not point to any valid memory.
int main() {
    int *p = NULL;   // pointer pointing to nothing
    if(p != NULL) {
        printf("%d", *p);
    } else {
        printf("Pointer is NULL, cannot use it!");
    }
    return 0;
}
/*Output:Pointer is NULL, cannot use it!
Safe initialization

int *p = NULL;  // now p is safe
Before you assign a real address, you don’t want it to point randomly.
Check before use

if (p != NULL) {
    printf("%d", *p); // safe
}

Always check if pointer is NULL before dereferencing.
This avoids crashes (segmentation fault).

*/
