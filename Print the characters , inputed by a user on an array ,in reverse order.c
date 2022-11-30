#include <stdio.h>

int main(){
int numbers[5],i;

printf("enter 5 numbers\n");
  for(i=0; i<5; i++)
  {
      scanf("%d", &numbers[i]);
  }
  for(i=4; i>-1; i--)
  {
      printf("%d\n",numbers[i]);
  }

return 0;
}
