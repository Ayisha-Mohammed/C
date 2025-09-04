#include <stdio.h>
int main() {
    for(int i = 1; i <= 3; i++) {
        for(int j = 1; j <= 3; j++) {
            if(j == 2) continue;
            if(i == j) printf("* ");
            else printf("%d%d ", i, j);
        }
    }
    return 0;
}
/*
Step-by-Step Dry Run

Outer loop → i = 1, 2, 3
Inner loop → j = 1, 2, 3

i = 1

j = 1 → j==2? no → i==j? yes → print *

j = 2 → j==2? yes → continue → skip printing, go to next j

j = 3 → j==2? no → i==j? no → print 13
✅ Output so far: * 13

i = 2

j = 1 → j==2? no → i==j? no → print 21

j = 2 → j==2? yes → skip

j = 3 → j==2? no → i==j? no → print 23
✅ Output so far: * 13 21 23

i = 3

j = 1 → j==2? no → i==j? no → print 31

j = 2 → j==2? yes → skip

j = 3 → j==2? no → i==j? yes → print *
✅ Output so far: * 13 21 23 31 *

✅ Final Output
* 13 21 23 31 *




*/