#include <stdio.h>
int fact(int n);
int fact(int n){
    if (n==0)
    return 1;
    int f=n*fact(n-1);
    return f;
}
int main(){
int a;scanf("%d",&a);
printf("The factorial of %d is %d",a,fact(a));
return 0;
}