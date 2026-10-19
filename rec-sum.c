#include <stdio.h>
int sum(int n);
int sum(int n){
    if (n==0)
    return 0;
    int s=n+sum(n-1);
return s;}
int main(){int a;
scanf("%d",&a);
printf("The sum is %d",sum(a));
return 0;}