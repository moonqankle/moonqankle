#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
int n,i=1;
scanf_s("%d", &n);
while(i*5<n)
{
printf("%d\n",i);
i=i*5;
}
return 0;
}
