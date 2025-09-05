// pointer : PASS BY VALUE

#include <stdio.h>
void swap(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a = 5, b = 10;
    swap(a, b);
    printf("%d %d\n", a, b);
    return 0;
}
/*
Step-by-step:

int a = 5, b = 10;

a=5, b=10

swap(a, b);

Copies of a and b are sent → x=5, y=10

Inside swap:

temp = x → temp=5

x = y → x=10

y = temp → y=5

Function ends → x and y die (they were copies).

Back in main, a=5, b=10 (unchanged).

✅ Output:
5 10  */

// pointer:PASS BY REFERENCE
#include <stdio.h>
void swap(int *x, int *y) {
    int temp = *x;  // temp = value at address of a
    *x = *y;        // value at address of a = value at address of b
    *y = temp;      // value at address of b = old value of a
}

int main() {
    int a = 5, b = 10;
    swap(&a, &b);
    printf("%d %d\n", a, b);
    return 0;
}

/*
Step-by-step:

int a = 5, b = 10;

a=5, b=10

swap(&a, &b);

We send addresses:

x = &a

y = &b

Inside swap:

temp = *x; → *x = value at &a = 5 → so temp=5

*x = *y; → *x = value at &b = 10 → so a=10

*y = temp; → *y = 5 → so b=5

Function ends → but changes remain (because we modified values through addresses).

✅ Output:

10 5





*/