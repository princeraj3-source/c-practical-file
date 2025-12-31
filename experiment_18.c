#include <stdio.h>
int main(){ int a[2][2],s=0; printf("Enter elements: ");
for(int i=0;i<2;i++) for(int j=0;j<2;j++){ scanf("%d",&a[i][j]); s+=a[i][j]; }
printf("Sum=%d",s); return 0;}