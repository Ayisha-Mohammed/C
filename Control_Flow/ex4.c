#include <stdio.h>
int main() {
    int i = 1, j = 5;
    while(i < j) {
        if(i % 2 == 0) {
            j -= 2;
            continue;
        }
        printf("%d%d ", i, j);
        i++;
    }
    return 0;
}

/*
Step-by-Step Dry Run

Initial: i = 1, j = 5

🔹 Iteration 1

Condition: i < j → 1 < 5 ✅

i % 2 == 0? → 1 % 2 = 1 → false → skip if-block

Print 15

i++ → i = 2
✅ Output: 15

🔹 Iteration 2

i=2, j=5 → 2<5 ✅

i % 2 == 0? → 2 % 2 = 0 → true

Enter if-block → j -= 2 → j = 3

continue → skips printf and i++
✅ i stays 2, j is now 3

🔹 Iteration 3

i=2, j=3 → 2<3 ✅

i % 2 == 0 → true again

j -= 2 → j=1

continue → skip everything again
✅ i still 2, j is now 1

🔹 Check Condition Again

i=2, j=1 → i<j? → 2<1 ❌ → loop ends

✅ Final Output
15 */