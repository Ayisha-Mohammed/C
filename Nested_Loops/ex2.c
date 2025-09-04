#include <stdio.h>
int main() {
    for(int i=1; i<=3; i++){
        for(int j=3; j>=i; j--){
            printf("%d", j);
        }
    }
    return 0;
}

/*

Solution (Dry Run):

i	j values printed	Output so far
1	3,2,1	            321
2	3,2	                32132
3	3	                321323

Output: 321323

*/