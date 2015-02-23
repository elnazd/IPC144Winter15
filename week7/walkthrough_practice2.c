/*What is the EXACT output of this program?  Show your work.*/


 #define HOUR 23
 #define MINU 59
 #define SECS 58
 #define HINC 00
 #define MINC 00
 #define SINC 01
 #define PERD 05
 #include <stdio.h>
 int ticktock(int *phour, int *pminute, int *psecond);

 int main(void)
 {
         int hour = HOUR, minute = MINU, second = SECS, i, newDay; 

         printf("%02d:%02d:%02d\n", hour, minute, second); 
         for (i = 0; i < PERD; i++) {
                 newDay = ticktock(&hour, &minute, &second);
                 printf("%02d:%02d:%02d", hour, minute, second);
                 if (newDay == 1)
                         printf(" New Day\n");
                 else
                         printf("\n");
         }
         printf("That\'s all folks!\n");

         return 0;
 }

 int ticktock(int *phour, int *pminute, int *psecond)
 {
         int newDay = 0;

         *phour   += HINC;
         *pminute += MINC;
         *psecond += SINC;
         if (*psecond >= 60) {
                 *pminute = *pminute + *psecond / 60;
                 *psecond = *psecond % 60;
         }
         if (*pminute >= 60) {
                 *phour   = *phour + *pminute / 60;
                 *pminute = *pminute % 60;
         }
         if (*phour >= 24 && (*pminute != 0 || *psecond != 0)) { 
                 newDay = 1;
                 *phour = *phour % 24;
         }

         return newDay;
 }
