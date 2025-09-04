#include <stdio.h>
int main(){
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            if(i==j) continue;
            printf("%d%d ",i,j);
        }
    }
    return 0;
}

/*
Step-by-Step Dry Run

Outer loop: i = 1, 2, 3
Inner loop: j = 1, 2, 3

i = 1

j = 1 → i==j → continue → skip printing

j = 2 → print 12

j = 3 → print 13
✅ Output so far: 12 13

i = 2

j = 1 → print 21

j = 2 → i==j → skip

j = 3 → print 23
✅ Output so far: 12 13 21 23

i = 3

j = 1 → print 31

j = 2 → print 32

j = 3 → i==j → skip
✅ Output so far: 12 13 21 23 31 32

✅ Final Output
12 13 21 23 31 32 







*/