/*What is the EXACT output of this program?  Show your work.*/

#define maxRow 4
#define maxCol 4

#include<stdio.h>
int main () 
{
    int row,col;
    for (row=1; row<=maxRow; row++)
    {
        for (col=1; col<=maxCol; col++)
        {
			if(col < row)
				printf ("%d ", row%col);
			else
				printf("%d ", row*col);
		}
        printf ("\n");
    }
   return 0;
}


