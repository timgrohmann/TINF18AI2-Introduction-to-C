/* ascii_art.c */
/* TO DO: Play around with the operators to create beautiful ascii art 
 - use different arithmetics
 - use different comparisons
 - use different characters (e.g. more than two) */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>



struct Point_s {
    double x,y;
};

double angle(struct Point_s a) {
    return atan2(a.y, a.x);
}

double magP(struct Point_s a) {
    return sqrt(a.x*a.x+a.y*a.y);
}

int main204() 
{
    int x, y;
    double v = 0;
    struct Point_s p;
    
    double d = 0;
    
    while (1) {
        d+= 0.05;
        
        for(y=0; y<30; y++) {
            for(x=0; x<41; x++) {
                p.x = x - 20;
                p.y = y - 15;
                
                
                
                //v=(x-20)*(x-20)+(y-15)*(y-15);
                //(int) floor(sqrt(v)) % 5 < 2
                
                double a = angle(p) + d;
                double mag = magP(p);
                
                mag += (a + M_PI_2) / M_2_PI;
                
                if((int) floor(mag) % 10 < 5) {
                    printf("🙂");
                }else printf("⭕️");
            }
            printf("\n");
        }
        
        system("clear");
    }
    
    
    
    return 0;
}
