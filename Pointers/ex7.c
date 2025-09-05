// POINTER : STRINGS

// In C, strings are really arrays of characters.
//Pointers can point to strings, and Zoho often tests the difference between pointer to string literal and character array.

//string literal:
#include <stdio.h>
int main() {
    char *p = "Hello";  // pointer points to string literal
    printf("%c\n", p[1]); // prints 'e'
    return 0;
}

/*
Key Points:
p points to read-only memory where "Hello" is stored.
You can read characters using p[i] or *(p+i).
You cannot modify the string literal:
p[0] = 'h'; // ❌ Error, may crash
Memory layout:

p --> 'H' 'e' 'l' 'l' 'o' '\0'  (read-only)
*/

//character array:

#include <stdio.h>
int main() {
    char arr[] = "Hello"; // array of chars
    arr[0] = 'h';         // ✅ allowed
    printf("%s\n", arr);  // prints "hello"
    return 0;
}

/*
Key Points:

arr creates modifiable memory.
Each character can be changed.
Memory layout:
arr[0]='h', arr[1]='e', arr[2]='l', arr[3]='l', arr[4]='o', arr[5]='\0'
*/

//pointer arithmetic with strings:

#include <stdio.h>
int main() {
    char *p = "Hello";
    printf("%c\n", *p);      // H
    printf("%c\n", *(p+1));  // e
    printf("%c\n", *(p+4));  // o
    return 0;
}

/*
*p → first character
*(p + i) → character at index i
Works exactly like pointer + array arithmetic
*/