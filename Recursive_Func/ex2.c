// sum recursion

#include <stdio.h>
int sum(int n) {
    if (n == 0) return 0;
    return n + sum(n - 1);
}
int main() {
    printf("%d", sum(5));
    return 0;
}

/*
Dry Run (sum(5))

sum(5) → 5 + sum(4)

sum(4) → 4 + sum(3)

sum(3) → 3 + sum(2)

sum(2) → 2 + sum(1)

sum(1) → 1 + sum(0)

sum(0) → base case → 0

Now backtrack:

sum(1) = 1 + 0 = 1

sum(2) = 2 + 1 = 3

sum(3) = 3 + 3 = 6

sum(4) = 4 + 6 = 10

sum(5) = 5 + 10 = 15

Output
15






*/