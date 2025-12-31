#include <stdio.h>
int main(){ int a[5],t; printf("Enter 5 numbers: "); for(int i=0;i<5;i++) scanf("%d",&a[i]);
for(int i=0;i<4;i++) for(int j=0;j<4-i;j++) if(a[j]>a[j+1]){t=a[j];a[j]=a[j+1];a[j+1]=t;}
for(int i=0;i<5;i++) printf("%d ",a[i]); return 0;}