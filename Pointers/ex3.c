//pointer array


#include <stdio.h>
int main() {
    int arr[] = {1,2,3};
    int *p = arr;
    printf("%d ", *p);     // 1
    printf("%d ", *(p+1)); // 2
    printf("%d ", *(p+2)); // 3
    return 0;
}
/*
int *p = arr;

In C, the array name arr is a pointer to the first element (i.e., &arr[0]).

So p = &arr[0] = 0x1000.

Step 3: Printing

👉 *p

p = 0x1000 → points to arr[0]

*p = value at 0x1000 = 1

👉 *(p+1)

p+1 = 0x1000 + 4 = 0x1004 (since int = 4 bytes)

Value at 0x1004 = arr[1] = 2

👉 *(p+2)

p+2 = 0x1000 + 8 = 0x1008

Value at 0x1008 = arr[2] = 3

✅ Output:
1 2 3
Key Rule:

arr[i] == *(arr+i)

p[i] == *(p+i)

So in this program:

*p       = arr[0]
*(p+1)   = arr[1]
*(p+2)   = arr[2]


*/