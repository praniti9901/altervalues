#include<stdio.h>
int main()
{
int a=3,b=5;
printf("before swapping a=%d b=%d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("/n after swapping a=%d b=%d",a,b);
return 0;
}
