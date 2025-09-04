//countdown recursion
//Recursion  trap.


#include <stdio.h>
int fun(int n) {
    if (n == 0) return 0;
    printf("%d ", n);
    return fun(n - 1);
}
int main() {
    fun(3);
    return 0;
}

/*
Step-by-Step Dry Run

main → fun(3)

fun(3) → n=3 → not 0 → print 3 → call fun(2)

fun(2) → n=2 → not 0 → print 2 → call fun(1)

fun(1) → n=1 → not 0 → print 1 → call fun(0)

fun(0) → n=0 → base case → return 0 (no print)

Final Output
3 2 1 

Zoho Trick Here:
Order of printing depends on before vs after recursion call.
If you print before the recursive call → numbers go downwards.
If you print after the recursive call → numbers go upwards.



*/