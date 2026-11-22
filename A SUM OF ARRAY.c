// write a cprogram to read 5 inters into an array and print the sum.
#include <stdio.h>
int main (void)
{
int a [5],i, min;
printf("enter the 5 elements");
for (i=0; i<5; i++)
scanf ("%d, &a[i]");
 min = a[0];
 for(i=1; i<5; i++){
        if (a[i] > min)
        min = a[i];
}
printf ("%d/n", min);
return 0;
}
