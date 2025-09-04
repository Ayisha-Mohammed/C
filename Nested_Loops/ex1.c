#include <stdio.h>
int main() {
    for(int i=1; i<=3; i++){
        for(int j=1; j<=i; j++){
            printf("%d", j);
        }
    }
    return 0;
}


/* output :

Solution (Dry Run):

i	jvalues printed	Output so far
1	1	    1
2	1,2	    1 1 2
3	1,2,3	1 1 2 1 2 3

Output: 1 1 2 1 2 3 */