#include <stdio.h>
int main(){ int a,b,t; printf("Enter two numbers: "); scanf("%d %d",&a,&b);
t=a; a=b; b=t; printf("After Swap: a=%d b=%d",a,b); return 0;}