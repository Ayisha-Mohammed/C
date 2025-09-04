// fib recursion


#include <stdio.h>
int fib(int n) {
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fib(n-1) + fib(n-2);
}
int main() {
    printf("%d", fib(4));
    return 0;
}


/*
Step-by-Step Dry Run (fib(4))

fib(4) → fib(3) + fib(2)

fib(3) → fib(2) + fib(1)

fib(2) → fib(1) + fib(0) → 1 + 0 = 1

fib(1) → 1

So fib(3) = 1 + 1 = 2

fib(2) → fib(1) + fib(0) → 1 + 0 = 1

fib(4) = fib(3) + fib(2) → 2 + 1 = 3

Output
3

*/