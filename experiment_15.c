#include <stdio.h>
int main(){ int a[5],k,f=0; printf("Enter 5 numbers: "); for(int i=0;i<5;i++) scanf("%d",&a[i]);
printf("Enter key: "); scanf("%d",&k); for(int i=0;i<5;i++) if(a[i]==k){printf("Found at %d",i+1); f=1; break;}
if(!f) printf("Not Found"); return 0;}