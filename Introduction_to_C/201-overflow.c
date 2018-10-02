/* check_int_overflow.c Check when integer numbers are overflowing */
// TO DO 1: complete the overflow detecion for other types
// TO DO 2: extend this to unsigned integers
//          --> unsigned int overflow 4294967295 -> 0
// TO DO 3: stop counting after first overflow
// TO DO 4: estimate how many operations are performed per second. -> 8s/4E9 ops
// TO DO 5 (optional): Use this program as benchmark for your CPU performance and compare it with other students' computers,
// TO DO 6 (optional): Check the CPU load when running the programm. What do you observe?

#include <stdio.h>
#include <time.h>

int main201() {
    
    unsigned int c = 0, old_c; //TODO 1: other data types
    long l = 0, old_l;
    time_t start, end;
    start = clock();
    
    while(1) {
        old_c=c;
        c++;
        if(old_c>c) {
            printf("overflow %u -> %u \n", old_c, c);
            end = clock();
            float time = (end-start) / (double) CLOCKS_PER_SEC;
            printf("took %fs \n", time);
            break; //used to stop counting after first overflow
        }
    }
    
    while(1) {
        old_l=l;
        l++;
        if(old_l>l) {
            printf("overflow for long %ld -> %ld \n", old_l, l);
            end = clock();
            float time = (end-start) / (double) CLOCKS_PER_SEC;
            printf("took %fs \n", time);
            break;
        }
    }
    
    return 0;
}
