#include <stdio.h>

int main(){
int numbers[5],a=0;


printf("enter 5 numbers\n");
for(int i = 0; i < 5; ++i)
{
   scanf("%d",&numbers[i]);
   a = a + numbers[i];
}

   printf("the combined sum of the values is:\n");
   printf("%d\n",a);

return 0;
}
