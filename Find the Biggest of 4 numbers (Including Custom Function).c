#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c,int d);

int main() {
    int a,b,c,d;
    printf("Enter 4 numbers");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d is the biggest", ans);

    return 0;
}

int max_of_four(int a, int b, int c,int d)
{
int result;
if(a>b&&a>c&&a>d)
result = a;
else if(b>c&&b>d)
result = b;
else if(c>d)
result = c;
else
result = d;
return result;
}
