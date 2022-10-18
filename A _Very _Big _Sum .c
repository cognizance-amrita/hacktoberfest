#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
int main() {
clrscr();
long long int a[10];
int n,i;
scanf("%d",&n);
long long int s;
s=0;
for(i=0;i<n;i++)
 scanf("%lli",&a[i]);
 for(i=0;i<n;i++)
 {
 s=s+a[i];
 }
printf("%lli",s);
return 0;
}
