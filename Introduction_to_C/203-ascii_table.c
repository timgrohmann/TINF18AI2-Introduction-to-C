/* ascii_table.c Draw a table of all asci characters */
/* TO DO 1: Extend the program to suppress special characters which derange the table 
   TO DO 2: Find out, which ASCII character is the beep 
            and (OPTIONAL...:) write a program which produces 'beep-music' 
            (use large loops to produce pauses between beeps.) */

#include <stdio.h>

int main203()
{
   int i, j;
   unsigned char c;
   for(i = 0; i<8 /* max rows */; i++)
   {
      printf("%3d ",i*16);
      for(j = 0; j<16; j=j+1) {
         c=i*16+j;
         printf("%c",c);
      }
      printf("\n");
   }
    return 0;
}
