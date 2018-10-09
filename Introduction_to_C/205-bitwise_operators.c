/* bitwise_operators.c binary operations */
/* TO DO 1: Something is wrong with the output 
 Hint: put the output first into an additional variable m,
 use bitwise operators and count the digits */
/* TO DO 2: A second number should be entered and 
 both numbers should be combined with the various bitwise
 operators before providing the output */
/* TO DO 3: Use signed integers and see how negative numbers 
 are presented in binary format */

#include <stdio.h>

void print_int(unsigned int a);

int main205()
{
    unsigned int l,n;
    unsigned int m = 0;
    
start:
    l = 0; n = 0; m = 0;
    
    printf("Please enter the first integer number:");
    scanf("%u",&l);
    printf("Please enter the second integer number:");
    scanf("%u",&n);
    
    printf("\n Binary representation: ");
    printf("1st: "); print_int(l); printf("  2nd: "); print_int(n);
    printf("\n1st & 2nd: "); print_int(l & n);
    printf("\n1st ^ 2nd: "); print_int(l ^ n);
    printf("\n1st | 2nd: "); print_int(l | n);
    
    printf("\n\n");
    goto start;
    return 0;
}


void print_int(unsigned int a) {
    
    int c = 0; //count to keep track of number of bytes
    unsigned int h = 0;
    while (a > 0) {
        h = h | (a&1);
        a = a >> 1;
        h = h << 1;
        c++;
    }
    h = h >> 1;
    
    
    while(c>0) {
        printf("%d", h&1 );
        h = h >> 1;
        c--;
    }
}
