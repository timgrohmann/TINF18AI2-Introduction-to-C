/* operator priorities.c - investigate operator priorities */
/* 
 TO DO 1: Think about the expressions: What will be the output of the programm?
 ...only then remove the last line und compile/run the program. Were your predictions correct?
 TO DO 2: With your neighbour: Exchange difficult expressions with each other
 - can you solve them without running the program?
 - use brackets to structure the expressions without changing their values
 */

#include <stdio.h>

int main206()
{
    int a, b, c, d;
    int result;
    
    a=1; b=2; c=3; d=4;
    
    result=a-b-c; // -4
    printf("result is %d\n", result);
    
    result=a<<b<<c; // 32
    printf("result is %d\n", result);
    
    result=d/b/b; // 1
    printf("result is %d\n", result);
    
    result=a>b? b>c? a : b : c; //3
    printf("result is %d\n", result);
    
    return 0;
}
