//Factorial recursion 


#include <stdio.h>
int factorial(int n) {
    if (n == 0) return 1;   // base case
    return n * factorial(n - 1);
}
int main() {
    printf("%d", factorial(4));
    return 0;
}

/*
Step-by-Step Dry Run

Call: factorial(4)
→ not base → return 4 * factorial(3)

factorial(3)
→ return 3 * factorial(2)

factorial(2)
→ return 2 * factorial(1)

factorial(1)
→ return 1 * factorial(0)

factorial(0)
→ base case → return 1

Backtracking

factorial(0) = 1

factorial(1) = 1 × 1 = 1

factorial(2) = 2 × 1 = 2

factorial(3) = 3 × 2 = 6

factorial(4) = 4 × 6 = 24

Final Output
24

zoho trick:remember no base case, and wrong base case.

Key Takeaway for Zoho:
Base case is mandatory → otherwise infinite recursion.
If wrong base case → some inputs work, others crash.
In factorial:
Valid bases = n==0 or n==1.
Invalid base = anything else → partial correctness only.


*/