#include <stdio.h>
int main() {
    for(int i = 1; i <= 3; i++) {
        for(int j = 1; j <= 3; j++) {
            if(i + j == 4) break;
            printf("%d%d ", i, j);
        }
    }
    return 0;
}

/*
Step-by-Step Dry Run

Outer loop: i = 1, 2, 3
Inner loop: j = 1, 2, 3

i = 1

j = 1 → 1+1=2 ≠ 4 → print 11

j = 2 → 1+2=3 ≠ 4 → print 12

j = 3 → 1+3=4 → break inner loop → stop inner loop
✅ Output so far: 11 12

i = 2

j = 1 → 2+1=3 ≠ 4 → print 21

j = 2 → 2+2=4 → break inner loop → stop inner loop
✅ Output so far: 11 12 21

i = 3

j = 1 → 3+1=4 → break inner loop immediately → print nothing

✅ Final Output
11 12 21 






*/