#include <stdio.h>

int main()
{
char a;
int b;
float c;

printf("enter a character value:\n");
scanf("%c",&a);
printf("the memory size of the declared character value is:%lu bytes\n", sizeof(a));

printf("enter an integer value:\n");
scanf("%d",&b);
printf("the memory size of the declared integer value is:%lu bytes\n", sizeof(b));

printf("enter a float value:\n");
scanf("%d",&c);
printf("the memory size of the declared float value is %lu bytes\n", sizeof(c));
return 0;
}
