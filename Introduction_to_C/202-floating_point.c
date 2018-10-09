/* floating_point.c Investigate the precision and borders of floating point numbers
 * TO DO 1: The program doesn't seem to stop. Maybe f and d should be increased faster?
 * TO DO 2: How does the 'limit behaviour' differ from integer numbers?
 *          --> due to limited precision at high values adding 1 doesn't change the value of f at some point
 * TO DO 3: Insert a comparison to check when the float and double values are different from each other,
 *          print the difference
 * TO DO 4: Related to TO DO 1: How can you find the maximum number fast, but also with high precision?
 *          --> Increase the adder when it gets too small
 * TO DO 5: Competition: Who generates the highest float number? (But not: NaN) */

#include <stdio.h>
#include <math.h>

int main202() {
    float f, old_f, adder;
    //double d, old_d, diff;
    
    f = 1;
    adder = 1;
    
    
    while(1) {
        old_f = f;    //old_d=d;
        f += adder;  //d=d*2;
        
        
        if(old_f>=f) {
            printf("float limit %e for adder %e \n", f, adder);
            adder *= 2;
            if (f == INFINITY) {
                return 0;
            }
        }
        //if(old_d>=d) printf("double limit %f -> %f \n", old_d, d);
        /*diff = d-f;
         if (diff != 0) {
         printf("%1.3f difference @ float=%f and double=%f \n",diff,f,d);
         return 0;
         }*/
    }
    
    return 0;
}
