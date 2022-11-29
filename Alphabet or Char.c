#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
char c;
printf ("enter a character\n");
scanf ("%c",&c);
if ((c>'a')&&(c<'z')||(c>'A')&&(c<'Z'))
  {printf("%c is an alphabet\n",c);}
else
  {printf("%c is a number\n",c);}

  return 0;
}
